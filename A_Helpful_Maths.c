#include<stdio.h>
#include<string.h>
int main(){
    char a[101];
    scanf("%s",a);
    int l=strlen(a),temp;
    for(int i =0;i<l;i++){
        if(a[i]=='+') continue;
        for(int j=i+1;j<l;j++){
            if(a[j]=='+') continue;
            else if(a[i]>=a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("%s\n",a);

}