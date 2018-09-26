#include<stdio.h>


int main(){
    int num1,num2;

    scanf("%d %d",&num1,&num2);

    if(num1>num2){
        if(num1%num2==0){
            puts("Sao Multiplos1");
            return 0;
        }
    }else if(num1<num2){
        if(num2%num1==0){
            puts("Sao Multiplos2");
             return 0;
        }
    }else if(num1==num2){
        puts("Sao Multiplos3");
        return 0;
    }

    puts("Nao sao Multiplos");
    return 0;
}
