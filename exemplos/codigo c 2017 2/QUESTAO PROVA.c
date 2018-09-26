int funcao(int vet[],int tam,int posicao){
 if(posicao==tam-1){
    return 0;
 }
 return vet[posicao]+funcao(vet,tam,++posicao);
}

int main(){
    int valor,vet[]={1,2,3,4,5,6,7,8,9,10};
    valor=funcao(vet,10,0);
    printf("%d",valor);
    return 0;
}



