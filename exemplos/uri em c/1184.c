#include <stdio.h>
#define TAM 11
int main(){
    float numero,soma,quantidade;
    int i,j;
    char operacao;
    soma=0;
    quantidade=0;
    scanf("%c",&operacao);
    for(i=0;i<=TAM;i++){
        for(j=0;j<=TAM;j++){
            scanf("%f",&numero);
            if(j<i){
             //   printf("%d %d\n",i,j);
                soma+=numero;
                quantidade++;
            }
        }
    }
    if(operacao=='S'){
        printf("%.1f\n",soma);
    }else{
        printf("%.1f\n",soma/66.0);
    }
    return 0;
}
