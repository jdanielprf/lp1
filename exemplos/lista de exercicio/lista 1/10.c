/*
10. Fa�a um programa para ler dois n�meros inteiros A e B e informar se A � divis�vel por B.
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
