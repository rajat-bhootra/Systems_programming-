#include <stdio.h>
int main() {
	
       printf("Rules of the Nim Game:\n");
       printf("1. The game starts with 2 piles, each containing a positive number of objects.\n");
       printf("2. On each player's turn, they must choose one pile and remove any number of objects \nfrom that pile (at least one, but as many as they wan    t from the chosen pile).\n");
       printf("3. Players must remove objects from only one pile during their turn.\n");
       printf("4. The player who removes the last object 'Wins' the game.\n");
 
       printf("\nBut in this program you can't win this game.\n");
  
       int size;
       printf("\nEnter the number of objects in each Pile: ");
       scanf("%d",&size);
       int pile1=size,pile2=size;
       printf("\nNumber of objects in each Pile:-\nPile_1 = %d Pile_2 = %d\n",pile1,pile2);
       int sel,num;
  
       while (size>0) {
            printf("\nYour turn choose a Pile :- \nEnter 1 for Pile_1\nEnter 2 for Pile_2\nEnter: ");
            scanf("%d",&sel);
            printf("\nEnter the number of objects you want to remove from the Pile: ");
            scanf("%d",&num);
  
            printf("\nComputer's turn .....\n");
            size=size-num;
            pile1=size,pile2=size;
            printf("\nNumber of objects in each Pile:-\nPile_1 = %d Pile_2 = %d\n",pile1,pile2);
            }
 
      printf("\nYOU LOST !!!!🤣🤣🤣\n");
 }
