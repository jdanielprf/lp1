#include<stdio.h>

int main(){
    int cifra,i,quant;
    char texto[100];
    scanf("%d",&quant);
    for(;quant>0;quant--){
        scanf("%s %d",texto,&cifra);

        for(i=0;i<strlen(texto);i++){
            int val=texto[i]+cifra;
            if(val<=90)
                printf("%c",val);
            else
                printf("%c",val-25);
        }
        puts("");
    }
    return 0;
}
