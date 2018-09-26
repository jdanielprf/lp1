#include<stdio.h>
#include<string.h>

int main(){
    int quant,i;
    char str1[50], str2[50];
    scanf("%d",&quant);
    for(;quant>0;quant--){
        scanf("%s %s",&str1,&str2);
        for(i=0;i<=50;i++){
            if(i<strlen(str1)){
                printf("%c",str1[i]);
            }
            if(i<strlen(str2)){
                printf("%c",str2[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
