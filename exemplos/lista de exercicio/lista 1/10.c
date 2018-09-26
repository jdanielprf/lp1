/*
10. Faça um programa para ler dois números inteiros A e B e informar se A é divisível por B.
*/
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%f\n",a/(float)b);
    if(a%b==0){
        printf("e divisivel");
    }else{
        printf("nao e divisivel");
    }
    return 0;
}
