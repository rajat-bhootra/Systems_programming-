#include <stdio.h>

int main(){
    char word[3];
    int vow=0,cons=0;

    printf("Enter a two letter word: ");
    scanf("%2s",word);

    for (int i=0;i<2;i++){
         switch(word[i]){
            case 'a': vow+=1;
                             break;
            case 'e': vow+=1;
                             break;
            case 'i': vow+=1;
                             break;
            case 'o': vow+=1;
                             break;
            case 'u': vow+=1;
                             break;
            default : cons+=1;
         }      
    }

    printf("No. of vowels: %d\n",vow);
    printf("No. of consonants: %d\n",cons);
}
