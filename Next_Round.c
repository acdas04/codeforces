#include<stdio.h>
int main(){
    int n,a,c=0;
    scanf("%d%d",&n,&a);
    int a1[n];
    for (int i=0;i<n;i++) scanf("%d",&a1[i]);
    for(int i=0;i<n;i++) if(a1[i]>=a1[a-1] && a1[i]>0) c++;
    printf("%d\n",c);
    return 0;
}