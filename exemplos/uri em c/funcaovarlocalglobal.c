#include<stdio.h>
int media;

void teste(){

    media=11;
    printf("funcao teste:%d\n",media);
}

int main(){

    media=10;
    teste();
    printf("funcao main:%d\n",media);
    return 0;
}
