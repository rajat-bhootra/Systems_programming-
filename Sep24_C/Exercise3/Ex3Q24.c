#include <stdio.h>
#include <math.h>

int main(){
    int num,digits=0,sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    
    int og=num;

    while (og!=0){
          og/=10;
          digits+=1;
    }
    
    og=num;
    while (og!=0){
          int unit=og%10;
          sum += pow(unit,digits);
          og/=10;
    }

    if (sum == num)printf("%d is an armstrong number.\n",num);
    else printf("%d is not an armstrong number.\n",num);
}
