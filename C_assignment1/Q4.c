// header for scanf (read input) and printf (printing result)
#include <stdio.h>

int main(){ 
    // take an integer from user (this programm will work correctly upto 20 factorial).
    long long int n;
    printf("Enter a positive number to calculate factorial: "); 
    scanf("%lld", &n);
    // first set count=1 and multiply it with next integer(e.g. 2) and update the value of count.continue this process till n.
    long long int count=1;
    for(int i=1;i<=n;i++){
        count=count*i;
    }
    // print the factorial of n.
    printf("%lld! = %lld\n",n,count);
}
