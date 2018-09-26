#include<stdio.h>

int main(){
    float salario,novoSalario;
    int percentual;
    scanf("%f",&salario);

    if(salario<=400){
        percentual=15;
    }else if(salario<800){
        percentual=12;
    }else if(salario<1200){
         percentual=10;
    }else if(salario<=2000){
        percentual=7;
    }else{
        percentual=4;
    }

    novoSalario=salario*((100.0+percentual)/100.0);

    printf("Novo salario: %.2f\n",novoSalario);
    printf("Reajuste ganho: %.2f\n",novoSalario-salario);
    printf("Em percentual: %d %%\n",percentual);


    return 0;
}
