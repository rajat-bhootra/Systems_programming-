#include<stdio.h>
int main(){
       unsigned char c=0; // 0 to 255 
       // char c=0;  // -128 to 127
	while( c < 200){
            // printf("%d ",c);
	     c++;
             if(c==0)printf("%d\n", c);
        }
	printf("\n");
}
