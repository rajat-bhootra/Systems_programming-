/*
Q3) Write a C program that 
(a) initializes  contents of 8 byte (  variable of type long) with a value 0x7071727374757677 .
(b) prints contents of the 8 byte as two integers using a integer pointer (int *)
(c) prints contents of the 8 byte as eight characters using character pointer (char *)
(d) print number of bytes taken by char, int and long data type.
*/

#include<stdio.h>

int main(){
    long a=0x7071727374757677;
    int *p=&a;
    char *q=&a;

    printf("%d %d\n",*(p+1),*p);
    printf("%c %c %c %c %c %c %c %c\n",*(q+7),*(q+6),*(q+5),*(q+4),*(q+3),*(q+2),*(q+1),*(q));

    printf("No. of bytes taken by char,int and long data types:\n");
    printf("size of char: %zubyte\n",sizeof(char));
    printf("size of int: %zubyte\n",sizeof(int));
    printf("size of long: %zubyte\n",sizeof(long));

}
