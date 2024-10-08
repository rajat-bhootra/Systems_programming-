#include<stdio.h>
 int main()
 {
 int a=10, b;
// wrong way : a>=5 ? b=20 : b=90 ;
 b = (a>=5) ? 20 : 90 ; // correct way
 printf("%d\n" , b);
 return 0;
 }
