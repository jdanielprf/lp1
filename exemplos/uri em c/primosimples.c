#include<stdio.h>

int main(){
    int numero,contador,quantDivisores;

    scanf("%d",&numero);
    quantDivisores=0;
    for(contador=1;contador<=numero;contador++){

        if(numero%contador==0){
            quantDivisores++;
            printf("%d e divisor\n",contador);
        }
    }

  //  printf("Numero de divisores=%d",quantDivisores);

    if(quantDivisores==2){
        printf("%d e primo",numero);
    }else{
        printf("%d nao e primo",numero);
    }
    return 0;
}
