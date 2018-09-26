#include<stdio.h>
#define ANO 365.0
#define MES 30.0
int main(){

    int dias=0,ano=0,mes=0;
    scanf("%d",&dias);

    if((dias/ANO)>0){
        ano=dias/ANO;
        dias=dias-ano*ANO;
    }

    if((dias/MES)>0){
        mes=dias/MES;
        dias=dias-mes*MES;
    }

    printf("%d ano(s)\n",ano);
    printf("%d mes(es)\n",mes);
    printf("%d dia(s)\n",dias);
    return 0;
}
