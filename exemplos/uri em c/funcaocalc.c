#include<stdio.h>

float div(float num1,float num2){
    float res;
    if(num2==0){
        printf("Erro divisao por zero!!!\n");
        return 0;
    }
    res=num1 / num2;
    return res;
}

float mult(float num1,float num2){
    float res;
    res=num1 * num2;
    return res;
}

float soma(float num1,float num2){
    float res;
    res=num1+num2;
    return res;
}

float sub(float num1,float num2){
    float res;
    res=num1-num2;
    return res;
}


int main(){
    float num1,num2;
    printf("Digite dois numeros:");
    scanf("%f %f",&num1,&num2);
    printf("soma:%.2f\n",soma(num1,num2));

    printf("sub:%.2f\n",sub(num1,num2));

    printf("mult:%.2f\n",mult(num1,num2));

    printf("div:%.2f\n",div(num1,num2));
    return 0;
}

