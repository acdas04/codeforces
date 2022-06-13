#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int n,o=0,e=0;
        scanf("%d",&n);
        int a1[n];
        for(int j=0;j<n;j++) {
            scanf("%d",&a1[j]);
            if(a1[j]%2==0) e++;
            else o++;
        }
        // for(int j=0;j<n;j++){
        //     if(a1[j]%2==0) e++;
        //     else o++;
        // }
        if(o>=e) printf("%d\n",e);
        else printf("%d\n",o);
    }
    return 0;
}