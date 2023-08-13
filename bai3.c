#include <stdio.h>
#include <string.h>

void all(){
	printf("Size of int: 4 bytes \n");
	printf("Value range of int: -2147483648 to 2147483647 \n");
	printf("Size of float: 4 bytes \n");
	printf("Value range of float: 1.17549e-38 to 3.40282e+38 \n");
	printf("Size of double: 8 bytes \n");
	printf("Value range of double: 2.22507e-308 to 1.79769e+308 \n");
	printf("Size of char: 1 bytes \n");
	printf("Value range of char: -128 to 127 \n");
	
}
void integer(){
	printf("Size of int: 4 bytes \n");
	printf("Value range of int: -2147483648 to 2147483647 \n");
}
void fl(){
	printf("Size of float: 4 bytes \n");
	printf("Value range of float: 1.17549e-38 to 3.40282e+38 \n");
}
void db(){
	printf("Size of double: 8 bytes \n");
	printf("Value range of double: 2.22507e-308 to 1.79769e+308 \n");
}
void ch(){
	printf("Size of char: 1 bytes \n");
	printf("Value range of char: -128 to 127 \n");
}
int main (){
    char x[100];
    printf("Enter the data type name (or 'all' to display all): ");
    gets (x);
    if (strcmp(x,"all")==0){
     all();
    }
    else if (strcmp(x,"int")==0){
    	integer();
	}
	else if (strcmp(x,"float")==0){
		fl();
	}
	else if(strcmp(x,"double")==0){
		db();
	}
	else if(strcmp(x,"char")==0){
		ch();
	}
    return 0;
}