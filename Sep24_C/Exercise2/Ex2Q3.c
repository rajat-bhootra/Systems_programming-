#include <stdio.h>

/*
Write a Cprogram to swap contents of two variables using only bitwise operations.
*/

int main(){
	
    int a,b;
   
    //take input from user.
    printf("Enter two number: ");
    scanf("%d",&a);
    scanf("%d",&b);
    
    //print before swap contents.
    printf("Before swap: a=%d b=%d\n",a,b);
    
    // use bitwise operator XOR to swap the contents of two variables.
    a=a^b;  
    b=a^b;
    a=a^b;
    
    //print after swap contents.
    printf("After swap: a=%d b=%d\n",a,b);
}
