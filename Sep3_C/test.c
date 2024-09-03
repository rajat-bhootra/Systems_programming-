#include<stdio.h>

int main(){
    int x,y;
    printf("Enter first num: ");
    scanf("%d",&x);
    printf("Enter second num: ");
    scanf("%d",&y);
    printf("x+y*x-y*y+(7*x-y*5)+(y/x)=%d\n",x+y*x-y*y+(7*x-y*5)+(y/x));

    if(x>y)printf("%d > %d\n",x,y);
    else printf("%d < %d\n",x,y);

    printf("x&y=%d\n",x&y);
    printf("x^y=%d\n",x^y);
    printf("x|y=%d\n",x|y);
    printf("x&&y=%d\n",x&&y);
    printf("x||y=%d\n",x||y);

}
