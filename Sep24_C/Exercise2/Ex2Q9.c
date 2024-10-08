#include <stdio.h> 

/*
Write a C program that takes as input two integers 
and checks if their LCM is equal 
to at least one of the given two integers.
*/

int lcm(int a, int b){
     if ((a%b)==0)return a;
     else if ((b%a)==0)return b;
     else {
         for (int i=1;i<(a*b);i++){
	     if (i%a==0 && i%b==0){
	        return i;
		break;
	     }
	 }
     }
}

int main(){
    int a,b;
    
    //take input from user.
    printf("Enter two integers: ");
    scanf("%d %d",&a,&b);
    
    if ((lcm(a,b)==a) || (lcm(a,b)==b))printf("LCM %d is equal to at least one of the given integers.\n",lcm(a,b));
    else printf("LCM of %d and %d is: %d\n",a,b,lcm(a,b));
}
