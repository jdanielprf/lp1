#include<stdio.h>
int main(){
    int i;
    i=1;
    switch(i){
        case 2:
        case 4:
        case 6:
        case 8:
            puts("par");
            break;
        default:
            puts("impar");

    }

    switch(i%2){
        case 0:
            puts("par");
            break;
        default:
            puts("impar");

    }

    return 0;
}
