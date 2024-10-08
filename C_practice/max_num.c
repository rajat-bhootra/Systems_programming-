#include <stdio.h>
int main(){
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    
    int arr[size];
    printf("Enter the ele of array: ");
    for (int i=0;i<size;i++)scanf("%d",&arr[i]);
   
    int max=arr[0];
    for (int i=0;i<size;i++){
         if (arr[i]>max)max=arr[i];
    }
    
    printf("number %d is maximum.\n",max);
}
