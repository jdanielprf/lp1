int main(){
    int x, *p;
    x=10;
    printf("%d \n",x);

    p=&x;
    *p=20;
    printf("%d \n",x);



    return 0;
}
