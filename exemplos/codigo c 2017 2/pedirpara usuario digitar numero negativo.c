int main(){
    int numero;

    do{
        printf("\nDigite um numero par:");
        scanf("%i",&numero);
    }while(numero%2 != 0);
    printf("vc acertou");

    return 0;
}
