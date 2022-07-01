#include<stdio.h>
int main(){
    int c=0,n;
    scanf("%d",&n);
    while(n--){
    char a[4];
    scanf("%s",a);
    if(a[0]=='+'||a[2]=='+') c++;
    else c--;
    }
    printf("%d",c);

}