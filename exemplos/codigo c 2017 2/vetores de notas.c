#include<stdio.h>
int main(){
    int x;
    float notas[6];

    for(x=0;x<=5;x++){
        printf("Digite a nota %d:",x);
        scanf("%f", &notas[x]);
    }

    for(x=0;x<=5;x=x+1){
        printf("%.1f ",notas[x]);
    }
    return 0;
}
