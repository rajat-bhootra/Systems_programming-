#include <stdio.h>

/*Write a simple calculator in C program. It should be able to add, subtract, multiply
and divide any two numbers input by the user.
NOTE: The user will also specify the operation to perform.*/

int main(){
    // take two number as an input from user.
    float a,b;
    char op;
    printf("Enter a any two numbers: ");
    scanf("%f",&a);
    scanf("%f",&b);

    //take operation from user.
    printf("Enter a operation(ex.: +,-,*,/): ");
    scanf("%s",&op);

    //use following case.
    if (op == '+')printf("%f+%f=%f\n",a,b,a+b);
    else if (op == '-')printf("%f-%f=%f\n",a,b,a-b);
    else if (op == '*')printf("%f*%f=%f\n",a,b,a*b);
    else if (op == '/')printf("%f/%f=%f\n",a,b,a/b);
    else printf("invalid operation!!\n");
}
