#include<stdio.h>

/*
Write a C program that takes the marks for 5 subjects as input and calculates the total
and average marks.
*/

int main(){
    //take inputs from user.
    float mark1,mark2,mark3,mark4,mark5;
    printf("Enter the marks of subject1: ");
    scanf("%f",&mark1);
    printf("Enter the marks of subject2: ");
    scanf("%f",&mark2);
    printf("Enter the marks of subject3: ");
    scanf("%f",&mark3);
    printf("Enter the marks of subject4: ");
    scanf("%f",&mark4);
    printf("Enter the marks of subject5: ");
    scanf("%f",&mark5);
    //compute the total and avg.
    printf("Total marks: %f\n",mark1+mark2+mark3+mark4+mark5);
    printf("Avg.  marks: %f\n",(mark1+mark2+mark3+mark4+mark5)/5);
}
