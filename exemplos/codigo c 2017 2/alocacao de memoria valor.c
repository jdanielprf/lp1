int main(){
    int  *p;
    p=(int *)malloc(sizeof(int)*10);
    p[1]=101;
    printf("%d",p[1]);
    free(p);
    return 0;
}
