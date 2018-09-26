#include<stdio.h>
int main(){
    int teste,i,jogo,quantidade,dedosJ1,dedosJ2;
    char nomej1[100],nomej2[100];
    teste=1;
    while(1){
        scanf("%d",&quantidade);
        if(quantidade == 0){
            return 0;
        }
        scanf("%s %s",nomej1,nomej2);
        printf("Teste %d\n",teste);
        for(jogo=1;jogo<=quantidade;jogo++){
            scanf("%d %d",&dedosJ1,&dedosJ2 );

            if((dedosJ1+dedosJ2)%2==0){
                printf("%s\n",nomej1);
            }else{
                printf("%s\n",nomej2);
            }
        }
        puts("");
        teste ++;
    }
    return 0;
}
