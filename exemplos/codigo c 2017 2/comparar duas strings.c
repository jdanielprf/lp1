
int main(){
    char texto1[20];
    char texto2[20];
    scanf("%s %s",&texto1,&texto2);
/*strcmp compara as duas strings
*/
    if(strcmp(texto1,texto2)==0){
        printf("elas sao iguais");
    }else{
        printf("elas sao diferentes");
    }

    return 0;
}
