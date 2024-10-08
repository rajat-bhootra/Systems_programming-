#include<stdio.h>

int main(){
    char grade ;
    printf("Enter your grade from (S/A/B/C/D/E): ");
    scanf("%c",&grade);
 
    if (grade == 'S')printf("your grade point is 10.\n");
    else if (grade == 'A')printf("your grade point is 9.\n");
    else if (grade == 'B')printf("your grade point is 8.\n");
    else if (grade == 'C')printf("your grade point is 7.\n");
    else if (grade == 'D')printf("your grade point is 6.\n");
    else if (grade == 'E')printf("your grade point is 4.\n");
    else printf("WRONG INPUT !!\n");
}
