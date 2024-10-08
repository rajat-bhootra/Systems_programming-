#include<stdio.h>

int main(){
    int *p;

    int x=20,y=30;
    p=&x;
    printf("p=%u &x=%u x=%d\n",p,&x,*p);
    *p=40;
    printf("p=%d x=%d\n",*p,x);
    p=&y;
    printf("p=%u &y=%u y=%d\n",p,&y,*p);
    *p=70;
    printf("p=%d y=%d\n",*p,y); 

    int arr[8][8];
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
	    arr[i][j]=i*8+j;
	}
    }

    int *q=&arr[0][0];
    printf("first element: %d\n",*q);
    printf("second element: %d\n",*(q+1));
    printf("address of first element in the array: %u\n",q);
    printf("address of second element in the array: %u\n",q+1);
    printf("value stored at address %u: %d\n",q+10,*(q+10));
    printf("value stored at address %u: %d\n",q+20,*(q+20));
    printf("value stored at address %u: %d\n",q+30,*(q+30));
    printf("\n");

    for(int i=0;i<64;i++){
       printf("address=%u value=%d\n",q+i,*(q+i));
    }
    printf("\n");
    for(int i=0;i<8;i++){
       for(int j=0;j<8;j++){
           printf("%d\t",*(q+j+i*8));
       }
       printf("\n");
    }
}
