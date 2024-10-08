#include <stdio.h>

void slice(char str[],int n,int m){     
    for (int i=n;i<=m;i++)printf("%c",str[i]);
    printf("\n");
}

int main(){
    char str[100];
    int n,m;
    
    printf("Enter a string: ");
    fgets(str,100,stdin);
    printf("Slice string from n to m: ");
    scanf("%d %d",&n,&m);
 
    slice(str,n,m);
 }
