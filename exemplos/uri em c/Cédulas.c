#include<stdio.h>
//https://www.urionlinejudge.com.br/judge/pt/problems/view/1018
int main(){
    int valor,quant;
    scanf("%d",&valor);

    printf("%d\n",valor);
    quant=valor/100;
    valor-=quant*100;
    printf("%d nota(s) de R$ 100,00\n",quant);


    quant=valor/50;
    valor-=quant*50;
    printf("%d nota(s) de R$ 50,00\n",quant);


    quant=valor/20;
    valor-=quant*20;
    printf("%d nota(s) de R$ 20,00\n",quant);


    quant=valor/10;
    valor-=quant*10;
    printf("%d nota(s) de R$ 10,00\n",quant);

    quant=valor/ 5;
    valor-=quant* 5;
    printf("%d nota(s) de R$ 5,00\n",quant);

    quant=valor/2;
    valor-=quant*2;
    printf("%d nota(s) de R$ 2,00\n",quant);

    quant=valor/1;
    valor-=quant*1;
    printf("%d nota(s) de R$ 1,00\n",quant);

    return 0;
}
