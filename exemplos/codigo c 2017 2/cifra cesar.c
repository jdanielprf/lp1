#include<stdio.h>
int main(){
    int i,chave,aux;
    char texto[10];
    scanf("%s %d",&texto,&chave);

    for(i=0;texto[i]!='\0';i++){
        aux=texto[i]+chave;
        if(aux>122)
            printf("%c",aux-26);
        else
            printf("%c",aux);
    }
    return 0;
}
