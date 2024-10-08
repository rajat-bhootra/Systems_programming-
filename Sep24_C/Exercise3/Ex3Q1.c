#include <stdio.h>

int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d",&a);
    scanf("%d",&b);
    
    printf("Multiple of 7 between %d and %d: \n",a,b);
    for (int i=a;i<=b;i++){
        if (i%7==0)printf("%d\n",i);
    }
}
