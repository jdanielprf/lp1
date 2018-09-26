int main(){
    int contador;
    int quantidade;
    quantidade = 0;
    for(contador = 3 ; contador <=1000 ; contador +=3){
        printf("%d ",contador);
        quantidade++;
    }
    printf("\nquantidade = %d",quantidade);

    return 0;
}
