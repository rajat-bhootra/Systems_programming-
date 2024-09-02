#include<stdio.h>

int main(){
    char arr1[20],arr2[20];
    int i=0;
    printf("Enter two strings of maximum length 19 characters.\nIf you enter more than 19 char prgramm will take only first 19 characters.\n");
    printf("Enter string 1: ");
    while( (arr1[i]=getchar()) != '\n'){
	  if(i>18)continue;
	  i++;
    }
    arr1[i]='\0';
    printf("String 1: %s\n", arr1);

    i=0;
    printf("Enter string 2: ");
    while( (arr2[i]=getchar()) != '\n'){
	  if(i>18)continue; 
	  i++;
    }
    arr2[i]='\0';
    printf("String 2: %s\n", arr2);
    
    int same=1;
    for(int i=0;i<19;i++){
	if( arr1[i] == '\0' && arr2[i] == '\0'){
	    break;
	}

	if(arr1[i] != arr2[i]){
	    same=0;
	    break;
	}	
    }

    if(same == 1){
      printf("Two strings are same.\n");
    }
    else{
      printf("Two strings are different.\n");
    }
}
