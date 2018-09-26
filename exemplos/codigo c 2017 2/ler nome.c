#include<stdio.h>
#include<string.h>

int main(){
    int i;
    char nome[10];
    scanf("%s",&nome);
    i=strlen(nome)-1;
    while(i>=0){
        printf("%c",nome[i]);
        i--;
    }
    puts("");
    for(i=0;i<strlen(nome);i++){
        printf("%c",nome[i]);
    }
    return 0;
}


