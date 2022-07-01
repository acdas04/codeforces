#include<stdio.h>
int main(){
    int n,c=0,m=0;
    scanf("%d",&n);
    char a[n+1];
    scanf("%s",a);
    for(int i=0;i<n;i++){
        if(i==m){
            printf("%c",a[i]);
            c++;
            m=c+m;
            // printf("%d\n",m);
        }
    }
    
    printf("\n");
    return 0;
}