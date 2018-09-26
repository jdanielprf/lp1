#include<stdio.h>


int main(){
//inicio
    int n1,n2,n3;
    scanf("%d",&n1);//leia
    scanf("%d",&n2);
    scanf("%d",&n3);

    if(n1 > n2 && n1 > n3){
        printf("Res n1: %d",n1);
    }

     if(n2 > n1 && n2 > n3){
        printf("Res n2: %d",n2);
    }

     if(n3 >= n1 && n3 >= n2){
        printf("Res n3: %d",n3);
    }




    return 0;//fim
}
