#include <stdio.h>
//include library to use malloc.
#include <stdlib.h>


int main(){
  //take size of array as an input from user.
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);

  //Allocate memory to store elements dynamically using malloc function
    int *arr=(int *) malloc(n*sizeof(int));
 
  //get the elements from the users.
    printf("Enter the elements of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
  //use insertion sort to sort the elements in array.
    for(int i=0;i<n;i++){
         int key=arr[i];
         int j=i-1;
         while(j>=0 && key<arr[j]){
               arr[j+1]=arr[j];
               j=j-1;
               arr[j+1]=key;
         }
    }

  //print the sorted array
    printf("Sorted array: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

}
