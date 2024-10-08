#include <stdio.h>

int main(){
    int num,prev;
    printf("You will enter a loop until an integer entered consecutively.\n");
    printf("Enter a number: ");
    scanf("%d",&num);
    prev=num;
    do { 
       prev=num;
       printf("Enter a number: ");
       scanf("%d",&num);
    } while (num!=prev);
}
