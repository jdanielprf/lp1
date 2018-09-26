#include<stdio.h>

int main(){
    float n1,n2,n3,nota;

    scanf("%f",&n1);
    scanf("%f",&n2);
    scanf("%f",&n3);
    nota=(n1*0.2+n2*0.3+n3*0.5);
    if(nota>10)
        printf("10.0\n");
    else if(nota<0)
        printf("0.0\n");
    else
    printf("MEDIA = %.1f\n",nota);

    return 0;
}
