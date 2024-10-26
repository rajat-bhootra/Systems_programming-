#include <stdio.h>
#include <stdlib.h>

// make a structure named as marks.
struct marks {
       int mark1;
       int mark2;
       int mark3;
};

// make a structure named as student.
struct student {
       int ID;	//roll number
       char name[50];
       struct marks M;
       float avg; //average marks 
       struct student *next;
};

int main(){
    // take input from user.
    int size;
    printf("Enter the number of student (from 1 to 50): ");
    scanf("%d",&size);
    
    //make a file pointer. input file name should be "input.txt" or you can change the file name in below program.
    FILE *fp=fopen("input.txt","r");
  
    // make struct pointer.
    struct student *first;
    struct student *current;

    // allocate memory to pointers.
    first = malloc(sizeof(struct student));          
    current = first;
     
    //for loop to read from file.
    for(int i=0;i<size;i++){
        // "fscanf" to read from file.
        fscanf(/*enter file pointer*/fp,"%d %s %d %d %d\n",&(current->ID),(current->name),&(current->M.mark1),&(current->M.mark2),&(current->M.mark3));
	current->avg=(float)(current->M.mark1+current->M.mark2+current->M.mark3)/3;
	//allocate memory to next line/input 
	current->next=(struct student* )malloc(sizeof(struct student));
	current=current->next;
    }

    current=first;
    // for loop for printing results.
    for(int i=0;i<size;i++){
        printf("Roll Number= %d\nName= %s\n\tMarks= %d %d %d\n\tAvg.= %f\n\n",(current->ID),(current->name),(current->M.mark1),(current->M.mark2),(current->M.mark3),current->avg);
	current=current->next;
    }

}

