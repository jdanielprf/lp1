#include<stdio.h>

int main(){
    int cifra,i,quant;
    char texto[100];
    scanf("%d",&quant);
    for(;quant>0;quant--){
        scanf("%s %d",&texto,&cifra);

        for(i=0;texto[i]!='\0';i++){
            int c=texto[i] - cifra;
            if(c<65)
                printf("%c",c + 26);
            else
                printf("%c",c);
        }
        puts("");
    }
    return 0;
}
