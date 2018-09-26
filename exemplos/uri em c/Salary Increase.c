#include<stdio.h>

int main(){
    int perc;
    float salarioAntigo=0,novoSalario=0;
    scanf("%f",&salarioAntigo);

    if(salarioAntigo<=400 ){
        perc=15;
    }else if(salarioAntigo <=800){
        perc=12;
    }else if(salarioAntigo <=1200){
        perc=10;
    }else if(salarioAntigo <=2000){
        perc=7;
    }else{
        perc=4;
    }
    if(salarioAntigo!=0){
        novoSalario=salarioAntigo+(salarioAntigo*((float)perc/(float)100));
    }else{
        perc=0;
        novoSalario=0;
    }
    printf("Novo salario: %.2f\n",novoSalario);
    printf("Reajuste ganho: %.2f\n",novoSalario-salarioAntigo);
    printf("Em percentual: %d %%\n",perc);

    return 0;
}
