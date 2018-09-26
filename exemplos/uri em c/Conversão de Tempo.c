#include<stdio.h>

int main(){
    int seg,hora,min;
    scanf("%d",&seg);

    hora=seg/(3600);
    seg-=hora*3600;
    min=seg/(60);
    seg-=min*60;

    printf("%d:%d:%d\n",hora,min,seg);
    return 0;
}
