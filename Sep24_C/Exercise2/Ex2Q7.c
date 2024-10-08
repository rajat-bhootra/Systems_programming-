#include<stdio.h>

/*
Write a C program that takes as input n1 o1 n2 o2 n3 where n1, n2, n3 are natural
 numbers and o1, o2 are operators. The program should use nested if-else-if so as to
 handle the expression which can have o1 and o2 from any of the operators in {+,-,*}.
*/

int main() {
    float n1,n2,n3;
    char o1,o2;

    printf("Enter three numbers and operators from {+,-,*} in the form n1 01 n2 o2 n3 : ");
    scanf("%f",&n1);
    scanf("%c",&o1);
    scanf("%f",&n2);
    scanf("%c",&o2);
    scanf("%f",&n3);

    if (o1=='+' && o2=='+')printf("%f%c%f%c%f = %f\n",n1,o1,n2,o2,n3,n1+n2+n3);
    else if (o1=='+' && o2=='-')printf("%f%c%f%c%f = %f\n",n1,o1,n2,o2,n3,n1+n2-n3);
    else if (o1=='+' && o2=='*')printf("%f%c%f%c%f = %f\n",n1,o1,n2,o2,n3,n1+n2*n3);
    else if (o1=='-' && o2=='+')printf("%f%c%f%c%f = %f\n",n1,o1,n2,o2,n3,n1-n2+n3);
    else if (o1=='-' && o2=='-')printf("%f%c%f%c%f = %f\n",n1,o1,n2,o2,n3,n1-n2-n3);
    else if (o1=='-' && o2=='*')printf("%f%c%f%c%f = %f\n",n1,o1,n2,o2,n3,n1-n2*n3);
    else if (o1=='*' && o2=='+')printf("%f%c%f%c%f = %f\n",n1,o1,n2,o2,n3,n1*n2+n3);
    else if (o1=='*' && o2=='-')printf("%f%c%f%c%f = %f\n",n1,o1,n2,o2,n3,n1*n2-n3);
    else if (o1=='*' && o2=='*')printf("%f%c%f%c%f = %f\n",n1,o1,n2,o2,n3,n1*n2*n3);
    else printf("Something went Wrong, please enter correct inputs.\n");
}
