int main(){
    int i;
    int vet[10];
    vet[0]=1;
    for(i=1;i<=9;i++){
        vet[i]=vet[i-1]+i;
    }
    printf("%d",vet[8]);
    return 0;

}
