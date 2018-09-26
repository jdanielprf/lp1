#include<stdio.h>

float mediaAlunos(float num1,float num2, float num3){
    float media;
    media=num1*0.3+num2*0.3+num3*0.4;
    return media;
}

int main(){
    float num1,num2,num3,media;
    printf("Escreva tres notas:");
    scanf("%f %f %f",&num1,&num2,&num3);



    printf("Res: %.2f",media(num1,num2,num3));

    return 0;
}
