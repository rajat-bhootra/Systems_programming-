#include<stdio.h>
int main(){
    int arr[8][8];
    for (int i=0;i<8;i++){
        for(int j=0;j<8;j++){
             arr[i][j]=j+i;
        }
    }
    
    int *p=&arr[0][0];
    printf("%c %c\n",arr[0][0],*p);
    printf("%d %d\n",arr[1][0],*(p+8));

    for(int i=0;i<8;i++){
       for(int j=0;j<8;j++){
           printf("%d\t",*(p+i*8+j));
       }
       printf("\n");
    }
}
