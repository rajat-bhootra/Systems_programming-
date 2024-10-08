#include <stdio.h>
#define maxxsize 10

int arr[10];

void readarray(int count){
    printf("Enter array: ");
    for(int i=0;i<count;i++)scanf("%d", &arr[i]);
}

void printarray(int count){
    printf("Sorted array: "); 
    for(int i=0;i<count;i++)printf("%d " ,arr[i]);
    printf("\n");
}

void sort(int count){
    for(int i=0;i<count;i++){
	int key=arr[i];
	int j=i-1;
        while(j>=0 && key<arr[j]){
	      arr[j+1]=arr[j];
	      j=j-1;
	      arr[j+1]=key;
	}
    }
}

int main(){
	int size;
	printf("enter a size of array between 1 to 10: ");
	scanf("%d",&size);
	if((size>10) ||( size<1)){
		printf("invalid input!!");
		printf("\n");
		return 0;    
	}
	readarray(size);
	sort(size);
	printarray(size);
}

