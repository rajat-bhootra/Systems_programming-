//Name     : Rajat Bhootra
//Roll no. : 112301044

#include<stdio.h>
#include<string.h>
#define max_size 10

int stack[max_size],top=-1;

void push(int a){
    if(top+1>=max_size)printf("Stack Full\n");
    else stack[++top]=a;
}

int pop(){
     if(top != -1) return stack[top--];
     printf("Stack Empty");
     return -1;
}

void printstack(){
     printf("Stack: ");
     for(int i=0;i<=top;i++)printf("%d ",stack[i]);
     printf("\n");
}

int main(){
    char input[50];
    long long int val;

    while(1){
         scanf("%s",input);
	 
         if(strcmp(input,"push")==0){
	    scanf("%lld",&val);
	    push(val);
	 }

	 else if(strcmp(input,"pop")==0){
	      printf("%d\n",pop());
         }

	 else if(strcmp(input,"printstack")==0){
		 printstack();
	 }

         else if(strcmp(input,"exit")==0) {
		 break;
         }

	 else printf("Invalid operation\n");
    
    }
}
