#include<stdio.h>

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);

    printf("Quotient after dividing by 32: %d\n",a>>5);
    printf("Remainder after dividing by 32: %d\n",a&31);

}
