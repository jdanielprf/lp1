#include<stdio.h>

int main(){
    int distancia,minutos;
    scanf("%d",&distancia);
    minutos=distancia*2;
    if(minutos>1)
        printf("%d minutos\n",minutos);
    else
        printf("%d minuto\n",minutos);
    return 0;
}
