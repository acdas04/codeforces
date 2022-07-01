#include<stdio.h>
int main(){
    int n,c=0,m=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n-1;i++){
        
        if(a[i]<a[i+1]) c++;
        else {
            if(m<=c) m=c;
            c=0;
        }
    } 
    if(m<=c) m=c;
    if(m==0) printf("%d\n",c+1);
    else printf("%d\n",m+1);
 return 0;
}