#include <stdio.h>

int main(){
    int a,b,sum=0;
    printf("Enter two numbers: ");
    scanf("%d",&a);
    scanf("%d",&b);
  
    for (int i=a;i<=b;i++){
        if (i%2==0)sum+=i;
    }

    printf("Sum of even numbers between %d and %d: %d\n",a,b,sum);
}
