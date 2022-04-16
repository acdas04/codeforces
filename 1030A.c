#include<stdio.h>
int main(){
    int a;
    int n,x=1,y=0;
    scanf("%d",&n);
    while(x<=n){
        scanf("%d",&a);
        if (a==1) y++;
        x++;
    }
    if (y==0) printf("EASY\n");
    else printf("HARD\n");
    return 0;
}