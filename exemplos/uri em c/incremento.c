#include<stdio.h>

int main(){
    int numero;
    // 2 4 6 8 10

    for(numero=1 ; numero<=10  ; numero++){
        if(numero%2==0){
            printf("%d\n",numero);
        }
    }
    return 0;
}
