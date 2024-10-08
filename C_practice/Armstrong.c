#include <stdio.h>

int arm(int num){
    if ((num/100)==0) return (num)*(num)*(num);
    else return ((num%10)*(num%10)*(num%10))+arm(num/10);
}
i
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    
    if (arm(num)==num)printf("number %d is an armstrong number.\n",num);   
    else printf("number %d is not an armstrong number.\n",num);
}
