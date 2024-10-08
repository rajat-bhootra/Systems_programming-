#include <stdio.h>

int main(){
    char input;
    printf("Enter a char: ");
    scanf("%c",&input);
    printf("%c and %c\n",input-1,input+1);
}
