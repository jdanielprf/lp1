int main(){
    int i,numero;
    scanf("%d",&numero);
    for(i=2;i<=numero;i++){
        if(i%2==0){
            printf("%d, ",i);
        }
    }
    return 0;
}
