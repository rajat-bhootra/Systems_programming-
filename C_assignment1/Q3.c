/*
Q3) Write a C program that accepts two positive integers n, k where n > k and 
    prints numbers from 1 to n which are not multiples of k.
*/

// header for scanf (read input) and printf (printing result)
#include <stdio.h>
int main(){
    // take two intgers from user. 	
    int n,k;
    printf("Enter two number n and k, where n>k.\n");
    printf("n: ");
    scanf("%d", &n);
    printf("k: ");
    scanf("%d", &k);
    // check if n is greater then k or not.
    if (n<=k)printf("Invalid input !!!");
    // iterate through 1 to n and find the non-multiple of k.
    for(int i=1;i<=n;i++){
        if (i%k != 0)printf("%d is not multiple of %d.\n",i,k);
    }
}
