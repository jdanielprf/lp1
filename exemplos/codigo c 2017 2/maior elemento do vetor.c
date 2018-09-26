int funcao(int vet[3][3]){
    int temp,i,j;
    temp=vet[0][0];
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            if(temp>vet[i][j]){
                temp=vet[i][j];
            }
        }
    }
    return temp;
}

int main(){
    int vet[3][3],maior;
    int i,j;
    //leitura dos valores
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            scanf("%d",&vet[i][j]);
        }
    }
    maior=funcao(vet);
    printf("o maior e: %d",maior);

    return 0;
}
