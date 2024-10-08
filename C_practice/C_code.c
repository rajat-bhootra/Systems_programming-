#include <stdio.h> //header for scanf(read input) and printf (printing output)
//macro size with value 10
#define size1 10

// declare arrays A,B,C of type int.
int A[10],B[10],C[10];
//function to add array A and B.result stored in C.

int add(int count){
   int i;//local decleration
   //for assignment,++ for increment, +for add, < for comparison
   for(i=0;i<count;i++) C[i]=A[i]+B[i];
}

// func to read array A and B
int readarrays(int count){
	printf("ARRAY A: ");
	for(int i=0;i<count;i++)scanf("%d", &A[i]); 
	printf("ARRAY B: ");
	for(int i=0;i<count;i++)scanf("%d", &B[i]);
	return 1;
}
// func to print array C
int printarray(int count){
	printf("ARRAY C=(A+B): ");
	for(int i=0;i<count;i++)printf("%d ", C[i]);
        printf("\n");
	return 0;
}

int main(){
int size;
printf("enter a value between 1 to 10: ");
scanf("%d", &size);
if((size>10) || (size<1)) {
     printf("invalid input,not in range\n");
     return 0;
}
readarrays(size);
add(size);
printarray(size);
}
