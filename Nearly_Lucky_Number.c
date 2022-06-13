#include <stdio.h>
int main(){
    long long a,c,count=0;
    scanf("%lli",&a);
    
    while(a!=0){
        c=a%10;
        if(c==4 || c==7) count++;
        a=a/10;
    }
    if(count==4 || count==7) printf("YES\n");
    else printf("NO\n");
    return 0;
}