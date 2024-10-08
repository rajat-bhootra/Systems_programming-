#include <stdio.h>

int main(){
    char word[3];
    printf("Enter a two letter word: ");
    scanf("%2s",&word); 
    
    for (int i=0;i<3;i++){
        if (word[i]>='A' && word[i]<='Z')continue;
        else word[i]^=32;
    }
    
    printf("All capital: %2s\n",word);
    
    for (int i=0;i<3;i++){
        word[i]^=32;
    }
    
    printf("All small : %2s\n",word);
}
