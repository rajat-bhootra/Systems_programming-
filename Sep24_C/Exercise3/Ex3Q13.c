#include <stdio.h>

int main(){
    int num,sum=0,prod=1;
    printf("Enter a number: ");
    scanf("%d",&num);

    while(num!=0){
         int unit=num%10;
         sum+=unit;
         prod*=unit;
         num/=10;
    }
    
    printf("Sum of digits: %d\n",sum);
    printf("Product of digits: %d\n",prod);
}
