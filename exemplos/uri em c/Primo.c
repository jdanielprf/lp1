#include<stdio.h>

int main(){
    int primo=1,x;
    int num,i,quant;

    scanf("%d",&quant);
    for(i=1;i<=quant;i++){
        primo=1;
        scanf("%d",&num);

        for(x=2;x<num;x++){
            if(num%x==0){
                primo=0;
                break;
            }
        }

        if(primo==0){
            printf("%d nao eh primo\n",num);
        }else{
            printf("%d eh primo\n",num);
        }
    }
    return 0;
}
