#include<stdio.h>

int main(){
    int i,quantPositivos;
    float numeros[7];
    scanf("%f",&numeros[0]);
    scanf("%f",&numeros[1]);
    scanf("%f",&numeros[2]);
    scanf("%f",&numeros[3]);
    scanf("%f",&numeros[4]);
    scanf("%f",&numeros[5]);
    quantPositivos=0;
    for(i=0;i<6;i++){
        if(numeros[i]>0){
            quantPositivos++;
        }
    }
    printf("%d valores positivos\n",quantPositivos);
    return 0;
}
