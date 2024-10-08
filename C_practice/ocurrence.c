#include <stdio.h>
int main(){
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    
    int arr[size];
    printf("Enter the ele of array: ");
    for (int i=0;i<size;i++)scanf("%d",&arr[i]);
   
    int num;
    printf("Enter a number to find its freq. in the array: ");
    scanf("%d",&num);

    int count=0;
    for (int i=0;i<size;i++){
         if (arr[i]==num)count++;
    }
    
    printf("number %d ocurred %d times.\n",num,count);
}
