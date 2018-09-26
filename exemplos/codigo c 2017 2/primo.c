int main(){
    int i, numero,divisores;
    divisores=0;
    scanf("%d",&numero);
    for(i=1;i<=numero;i++){
        if(numero%i==0){
            divisores++;
        }
    }
    if(divisores>2){
        printf("nao e primo");
    }else{
        printf("primo");
    }
    return 0;
}
