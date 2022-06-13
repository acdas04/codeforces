#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a1[2*n],e=0,o=0;
        for (int i=0;i<2*n;i++){
            scanf("%d",&a1[i]);
            if(a1[i]%2==0) e++;
            else o++;

        }
        if(e==o) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}