#include <stdio.h>
int main(){
    int n1,n2,res;

    scanf("%d %d",&n1,&n2);
    if(n2>n1){
        res=n2%n1;
    }else{
        res=n1%n2;
    }
    if(res==0){
        puts("Sao Multiplos");
    }else{
        puts("Nao sao Multiplos");
    }
    return 0;
}
