#include<stdio.h>
int main (){
    int a,b,c,s=0;
    scanf("%d%d%d",&a,&b,&c);
    for(int i=1;i<=c;i++){
        s=s+i*a;
    }
    if(s>b) printf("%d\n",s-b);
    else printf("0\n");
    return 0;
}