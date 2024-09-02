// including header file for scanf(input) and printf(output).
#include <stdio.h>
// macro size with value 10
#define maxsize 10
// make an array of size 10 to store input integers.
int arr[10];
// take input from user.
void input(){
     printf("Enter an array of 10 inegers: ");
     for(int i=0;i<10;i++)scanf("%d", &arr[i]);
}
// print array of integers given by user.
void print(){
	printf("Array: ");
 	for(int i=0;i<10;i++)printf("%d ", arr[i]);
	printf("\n");
}
// do the sum of all the elements of array.
void sum(){
     int count = 0;
     for(int i=0;i<10;i++){
          count+=arr[i];  
     } 
     printf("Sum of elements of array: %d", count);
     printf("\n");
}
// main function to run above function.
int main(){
    input();
    print();
    sum();
}
