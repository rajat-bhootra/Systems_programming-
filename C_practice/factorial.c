#include <stdio.h> 

int facto(int n){
    if (n==0)return 1;
    return n*facto(n-1);
}

int main(){
    int  num;
    printf("Enter a number to calculate factorial: ");
    scanf("%d",&num);

    printf("%d! = %d\n",num,facto(num));
}
