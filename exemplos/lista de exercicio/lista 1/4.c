//exercicio 4 lista 1
/*
Fa�a um programa para ler duas vari�veis inteiras e trocar o seu conte�do
*/
int main(){
    int x,y,aux;
    //entrada
    scanf("%d %d",&x,&y);
    //processamento
    aux=x;
    x=y;
    y=aux;
    //saida
    printf("x=%d y=%d",x,y);
    return 0;
}
