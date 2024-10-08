#include<stdio.h>

/*The following C code has errors. Modify to take a positive integer as input and print
 if it is even or odd
 #include <stdio.h>
 int main()
 {
 int value = 0;
 printf("Enter a positive number: ");
 scanf("%d", &value);
 if(value & 1 == 0)
 printf("The number was odd\n");
 else
 printf("The number was even\n");
 return 0;
 }*/

int main(){
    int num;
    printf("Enter a positive number: ");
    scanf("%d",&num);

    // in binary any odd number has right most bit as 1 so 
    // take its and with 1 which will give 1 . 
    // (ex.13 = 1101 and 1 = 0001 so 13 & 1 = 0001
    
    if ((num & 1)==1)printf("The number %d is odd.\n",num);
    else printf("The number %d is even.\n",num);

}
