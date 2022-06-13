#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int n,s=0,c=0,c1=0;
        scanf("%d",&n);
        int a1[n];
        for(int j=0;j<n;j++){
            scanf("%d",&a1[j]);
            s=s+a1[j];
            if(a1[j]==2) c++;
            if(a1[j]==1) c1++;
        }
        // printf("c=%d\n",c);
        // printf("s=%d\n",s);
        if(s%2!=0)printf("NO\n");
        else{
            if(c%2!=0 && c1==0) printf("NO\n");
            else if(c%2==0||c1%2==0) printf("YES\n");
            
        }
    }
    return 0;
}