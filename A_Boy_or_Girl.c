#include<stdio.h>
#include<string.h>
int main(){
    char a[101];
    scanf("%s",a);
    int l=strlen(a);

    int c=0,f[123]={0};
    // for(int i=0;i<l;i++){
    //     s=s+a[i];
    // }
    //  printf("%d\n",l);
    for(int i=0;i<l;i++) f[(int)a[i]]++;
     for(int i=97;i<123;i++){
         if(f[i]>=1) c++;
     }
    //  printf("%d\n",c);
    if(c%2==0) printf("CHAT WITH HER!\n");
    else printf("IGNORE HIM!\n");
    return 0;

}