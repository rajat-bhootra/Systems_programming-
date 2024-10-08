#include <stdio.h>

int main(){
    char name[50];
    printf("Enter your full name: ");
   // scanf("%s",name);
    fgets(name,50,stdin);

    int count = 0,i=0;
    while (name[i]!='\0'){
          if (name[i]==' ')i++;
          count++;
          i++;
    }

    printf("your name has %d letters.\n",count);
}
