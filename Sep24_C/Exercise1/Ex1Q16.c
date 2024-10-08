#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter Coefficients of quadratic equation ax^2+bx+c=0 respectively: ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    int D = b*b-(4*a*c);
   
    if (D > 0)printf("roots are real.\n");
    else if (D < 0)printf("roots are complex.\n");
    else printf("roots are real and equal.\n");
}
