#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,d;
    int i;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    for(i=a;i<sqrt(c);i+=a){
        if(i%b!=0){
           if(c%i==0){
                if(d%i!=0){
                    printf("%d\n",i);
                    return 0;
                }
           }
        }
    }
    printf("-1\n");
    return 0;
}
