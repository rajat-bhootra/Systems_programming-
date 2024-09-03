#include<stdio.h>
int main(){
  //  unsigned char a=0;
    char a=0;
    int i=0;
    printf("Enter a num: ");
    scanf("%d",&i);
    fprintf(stderr,"stderr=done");
    printf("stdout=done");
    while(a<200){
	//    printf("%d ",a);
        if(a==0)printf("a=0\n");	   
        a++;
    }
    printf("%d done\n",a);
}
