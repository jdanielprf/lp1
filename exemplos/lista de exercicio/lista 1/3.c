//questao 3 exercicio 1
/*
Fa�a um programa para ler o pre�o de compra e o percentual de lucro desejado por um
vendedor e calcular o pre�o de venda.
*/

int main(){
    float preco,lucro,precoFinal;
    //entrada
    scanf("%f %f",&preco,&lucro);
    //processamento
    precoFinal= preco+((lucro/100)*preco);
    //saida
    printf("o preco final e: RS%f",precoFinal);
    return 0;
}
