#include<stdio.h>
#include<string.h>
void cifradecesar(){
    int chave,i;
    char texto[50];
    scanf("%s %d",&texto,&chave);
    for(i=0;i<strlen(texto);i++){
            char novoChar=texto[i]-chave;
            if(novoChar>=65){
                printf("%c",novoChar);
            }else{
                printf("%c",'Z'+1-('A'-novoChar));
            }
    }
    printf("\n");
}
int main(){
    int i,teste;
    scanf("%d",&teste);
    for(i=0;i<teste;i++){
        cifradecesar();
    }
    return 0;
}
