#include <stdio.h>

int main(){
    int num,sum=0;
    printf("You will enter a loop until you enter 0.\n");
    printf("Enter a number: ");
    scanf("%d",&num);
    do { 
       sum+=num;
       printf("Enter a number: ");
       scanf("%d",&num);
    } while (num!=0);

    printf("Sum of all the numbers: %d\n",sum);
}
