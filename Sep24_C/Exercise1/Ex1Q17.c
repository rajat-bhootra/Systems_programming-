#include <stdio.h>
#include <stdlib.h>

int main(){
    char word1[6],word2[6];
    int sum=0;
    printf("Enter first 5-letter word: ");
    scanf("%5s",&word1);
    printf("Enter second 5-letter word: ");
    scanf("%5s",&word2);
    
    for (int i=0;i<6;i++){
         sum+=abs(word1[i]-word2[i]);
    } 
    
    printf("%d\n",sum);
}    
