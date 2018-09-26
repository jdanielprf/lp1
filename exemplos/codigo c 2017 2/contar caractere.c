int main(){
    int i,quant=0,tam;
    char letra, texto[19];
    scanf("%c %s",&letra,&texto);
    tam=strlen(texto);
    for(i=0;i<tam;i++){
        if(letra == texto[i]){
            quant++;
        }
    }
    printf("quantidade =%d",quant);
    return 0;
}

