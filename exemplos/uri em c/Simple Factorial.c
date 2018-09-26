#include<stdio.h>

long long fatorial(int num){
    if(num==1){
        return 1;
    }else{
        return num*fatorial(num-1);
    }
}

int main(){
    int num;
    scanf("%d",&num);
    printf("%ld\n",fatorial(num));

    return 0;
}
