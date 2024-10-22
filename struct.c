#include <stdio.h>
#include <stdlib.h>

struct marks {
       int mark1;
       int mark2;
       int mark3;
};

struct student {
       char name[50];
       struct marks M;
       float avg;
       struct student *next;
};

int main(){
  /*  struct student s1;
    s1.ID = 112301044;
    s1.mark1 = 20;
    s1.mark2 = 30;
    s1.mark3 = 50;
    strcpy(s1.name,"Rajat");
    s1.avg = (float)(s1.mark1+s1.mark2+s1.mark3)/3;
    printf("ID  = %d\n",s1.ID);
    printf("name  = %s\n",s1.name);
    printf("Avg. = %f\n",s1.avg); */

    int size;
    printf("Enter the number of student: ");
    scanf("%d",&size);

    FILE *fp=fopen("input.txt","r");
  
    struct student *first;
    struct student *current;

    first = (struct student* )malloc(sizeof(struct student));          
    current = first;
     
    for(int i=0;i<size;i++){
        fscanf(fp,"%s %d %d %d\n",(current->name),&(current->M.mark1),&(current->M.mark2),&(current->M.mark3));
	current->avg=(current->M.mark1+current->M.mark2+current->M.mark3)/3;
	current->next=(struct student* )malloc(sizeof(struct student));
	current=current->next;
    }

    current=first;

    for(int i=0;i<size;i++){
        printf("Name=%s\n\tMarks=%d %d %d\n\tAvg.=%f\n\n",(current->name),(current->M.mark1),(current->M.mark2),(current->M.mark3),current->avg);
	current=current->next;
    }

}

