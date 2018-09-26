int main(){

    int vet[]={1,2,3,4,5,6};
    int *p;
    p=&vet[1];
    *p=*p+*(p);
    printf("%d \n",*p);
    return 0;
}
