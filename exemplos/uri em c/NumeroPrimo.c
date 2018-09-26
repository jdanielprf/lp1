#include<stdio.h>

int main(){
    int num,i;
    scanf("%d",&num);
    for(i=0;i<num;i++){
        if(num%i==0){
            printf("NAO\n");
            return 0;
        }
    }
    printf("SIM");
    return 0;
}
