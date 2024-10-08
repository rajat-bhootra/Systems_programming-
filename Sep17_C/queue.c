#include <stdio.h>
#include <string.h>
#define max_size 10

// make an empty arr as Queue of size 10 and initialize two variables front & rear =0.
int que[max_size];
int front=0,rear=0;

//func to show queue is empty.
void IsEmpty(){
     printf("Queue is empty\n");
}

//func to show queue is full.
void IsFull(){
     printf("Queue is full\n");
}

//make a func Enqueue which take an integer and add it to the end of queue.
void Enqueue(int a){
   //handeling various cases of queue being full.
   //it is full only if front == 0 and rear == 10.
   if(rear==max_size && front==0)IsFull();
   
   //what if rear == 10 but front != 0 and we call Enqueue function then it should shift all elements to the start and add given integer to this new queue.
   //then variables front=0 and rear = end of queue+1.
   else if (rear==max_size && front!=0){
        for(int i=0;i<rear;i++){
	       if (i==rear-front){
		   que[i]=a;
		   rear=rear-front;
	       }
	       else que[i]=que[front+i];
        }
	front=0;
	rear=rear-front+1;
   }
   // if none of the above is happening then add integer from the front in queue and increse rear by 1 if it is less than max size.
   else {
	   que[rear]=a;
           if (rear<max_size)rear++;
   }	   
}

// make a func Dequeue which deletes an element from the front of queue and print it.
void Dequeue(){
     // a queue can be empty only if there is no element in queue.
     if((front>=max_size && rear!=0) || (front==rear)){
	     IsEmpty();
	     front=0;
	     rear=0;
     }
     //printing the front element and then increase front by one.
     else {
	 printf("%d\n",que[front]);
	 if (front<max_size)front++;
     }  
}

//func to print queue.
void PrintQueue(){
     if (front==rear)IsEmpty();
     else {
	   printf("Queue: ");
           for(int i=front;i<rear;i++)printf("%d ",que[i]);
           printf("\n");
     }
}

//main func to take input from terminal.
int main(){
    char input[50];
    long long int val;  

    printf("You can use Enqueue(takes an integer as input),Dequeue,PrintQueue And exit functions to make a queue.\n");
    // identify function to be called by string camparison.
    while(1){
         scanf("%s",input);
         
	 if(strcmp(input,"Enqueue")==0){
	    scanf("%lld",&val);
	    Enqueue(val);
	 }

	 else if(strcmp(input,"Dequeue")==0){
	     Dequeue();
	 }
         
	 else if(strcmp(input,"PrintQueue")==0){
	      PrintQueue();
	 }

	 else if(strcmp(input,"exit")==0) {
                 break;
         }

         else printf("Invalid operation\n");
    }
}
