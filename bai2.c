#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool check(int n){
    if (n<2){
        return false;
    }
    else if (n==2){
        return true;
    }
    else {
        for (int i=2;i<=sqrt(n);i++){
            if (n%i==0) 
            return false ;
        }
        return true;
    }
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    for (int i=a;i<=b;i++){
        if (check(i)==true){
            printf("%d ",i);
        }
    }
    return 0;
}