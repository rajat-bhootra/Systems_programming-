#include <stdio.h>

int main(){

    int num,original,reversed=0;
    printf("enter a number: ");
    scanf("%d",&num);
    
    original=num;
    while (num!=0){
          int last=num%10;
          reversed=reversed*10+last;
          num/=10;
    } 
     
    if (original==reversed)printf("%d is palindrome.\n",original);
    else printf("%d is not palindrome.\n",original);
}  
