#include <stdio.h>

int main() {
    int size;
    printf("Enter the number of objects in each Stacks: ");
    scanf("%d",&size);
    int stack1=size,stack2=size;
    printf("\nNumber of objects in each Stack:-\nStack1 = %d Stack2 = %d\n",stack1,stack2);
    int sel,num;

    while (size>0) {
         printf("\nYour turn choose a Stack :- \nEnter 1 for Stack1\nEnter 2 for Stack2\nEnter: ");
         scanf("%d",&sel);
         printf("\nEnter the number of objects you want to remove from the Stack: ");
         scanf("%d",&num);

         printf("\nComputer's turn .....\n");
	 size=size-num;
         stack1=size,stack2=size;
         printf("\nNumber of objects in each Stack:-\nStack1 = %d Stack2 = %d\n",stack1,stack2);
         }

    printf("\nYOU LOST !!!!🤣🤣🤣\n");
   
}
