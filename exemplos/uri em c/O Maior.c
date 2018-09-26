#include<stdio.h>

int main(){
    int maior,num;
    scanf("%d",&maior);

    scanf("%d",&num);
    if(num>maior){
        maior=num;
    }

    scanf("%d",&num);
    if(num>maior){
        maior=num;
    }
    printf("%d eh o maior\n",maior);
    return 0;
}
