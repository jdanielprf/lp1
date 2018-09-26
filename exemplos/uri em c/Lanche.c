#include<stdio.h>
#define CQ 4
#define XSAL 4.5
#define XBAC 5
#define TOR 2
#define REF 1.5
int main(){
    float valorProduto=0;
    int cod,quant;

    scanf("%d %d",&cod,&quant);
    if(cod==1){
        valorProduto=CQ;
    }else if(cod==2){
        valorProduto=XSAL;
    }else if(cod==3){
        valorProduto=XBAC;
    }else if(cod==4){
        valorProduto=TOR;
    }else if(cod==5){
        valorProduto=REF;
    }

    printf("Total: R$ %.2f\n",quant*valorProduto);
    return 0;
}
