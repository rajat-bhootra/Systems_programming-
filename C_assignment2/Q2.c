/*
Q2: Write a C program that
(a) Reads a string into an array
(b) Checks whether  string  read is palindrome.
(c) if  string read is palindrome print "string is palindrome" otherwise print "string is not palindrome"
*/
#include<stdio.h>

int main(){
    int i=0;
    char arr[50];

    printf("Enter string: ");
    while( (arr[i]=getchar()) != '\n')i++;
    arr[i]='\0';
    printf("String: %s\n",arr);
    
    int palindrome=1;
    for(int j=0;j<i/2;j++){
        if(arr[j] != arr[i-j-1]){
	   palindrome=0;
	   break;
	}
    }
     
    if(palindrome==1){
       printf("String is a Palindrome.\n");       
    }
    else{
       printf("String is not a Palindrome.\n");
    }
}
