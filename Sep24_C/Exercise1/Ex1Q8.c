#include<stdio.h>

/*
Write a C program that takes a three digit integer as input and prints the sum of its
digits.
*/

//created a function to sum the digits of number.
int sum(int num){
        // take remainder with 10 to get units digit.	
        int unit=num%10;
	// take division with 10 then take remainder with 10 to get tens digit.
        int tens=(num/10)%10;
	// take division with 100 to get hundereth digit
	int hun=num/100;
	// return sum of all digits.
	return unit+tens+hun;
}

int main(){
    //take a three digit num from user.
    int num;
    printf("Enter a three digit integer: ");
    scanf("%d",&num);
    if(num<1000 && num>99)printf("Sum of digits of %d is: %d\n",num,sum(num));
    else printf("ENTER A THREE DIGIT INTEGER!!!\n");
}
