//exercicio 4 lista 1
/*
Faça um programa para ler duas variáveis inteiras e trocar o seu conteúdo
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
