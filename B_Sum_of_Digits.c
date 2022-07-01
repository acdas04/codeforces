#include<stdio.h>
#include<string.h>
int c=0;
int dc(int a){
    int n,s=0;
    while(a!=0){
        n=a%10;
        s=s+n;
        a=a/10;
    }
    c++;
    return s;
}

int main(){
    char a[100002];
    scanf("%s",a);
    int s=0;
    int l=strlen(a);
    if(l==1){
        printf("0\n");
        return 0;
    }
    for(int i=0;i<l;i++){
        s=s+(a[i]-'0');
    }
    if(s<=9){
         printf("1\n");
         return 0;
    }
    c++;

    int x=dc(s);
    while(x>9){
        x=dc(x);
    }
    // if(c==1) printf("0\n");
    printf("%d\n",c);
    return 0;
}