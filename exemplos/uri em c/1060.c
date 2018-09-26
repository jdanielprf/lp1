#include<stdio.h>
int main(){
    int quantidade=0,i;
    float numero;
    for(i=1;i<=6;i++){
        scanf("%f",&numero);
        if(numero>0){
            quantidade++;
        }
    }
    printf("%d valores positivos\n",quantidade);
    return 0;
}
