int main(){
    float nota1,nota2,media;
    int faltas;
    //entrada
    scanf("%f %f %d",&nota1,&nota2,&faltas);
    media=(nota1+nota2)/2;

    if(media>=7 && faltas<=20){
        printf("aprovado");
    }else if(faltas>20){
        printf("reprovado por falta");
    }else if(media<7){
        printf("reprovado por media");
    }
    //<-
    return 0;
}
