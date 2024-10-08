/*
Q2) Write a C Program that takes as input an array 
    of integers and reverse the array elements.
*/

// header for scanf (read input) and printf (printing result)
#include <stdio.h>

int main(){
    // take size of array from user.
    int size;
    printf("Enter the size of your array: ");
    scanf("%d", &size);
    // if user enters a negative size.
    if(size<=0){
      printf("Invalid,input!!\n");
    }
    // create two arrays.
    int arr[size],rev[size];
    // take input from user.
    printf("Enter array's elements: ");
    for(int i=0;i<size;i++)scanf("%d", &arr[i]);
    // print the input array
    printf("Array: ");
    for(int i=0;i<size;i++)printf("%d ", arr[i]);
    printf("\n");
    // create another array from the elements of input array in reverse order.
    int j=0;
    for(int i=size-1;i>=0;i--){
         rev[j]=arr[i];
         j++;
     }
    // print the reversed array 
    printf("reversed array: ");
    for(int i=0;i<size;i++)printf("%d ", rev[i]);
    printf("\n");

}
