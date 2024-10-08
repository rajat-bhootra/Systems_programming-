#include<stdio.h>
int main(){
      //  unsigned int i=0; // 0 to 65535 
        int i=0;  // -32768 to 32767
	while( i < 66000){
           //  if(i==0)printf("%d\n", i);
             printf("%d ",i);
	     i++;
        }
	printf("\n");
}
