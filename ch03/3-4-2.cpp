#include<stdio.h>
#include<string.h>
#define maxn 10000000+10
char s[maxn];

int main(){
    scanf("%s",s);
    int n = strlen(s);
    int tot = 0;
    for(int i = 0;i<n;i++){
        if(s[i] == '1') tot++;
    }
    printf("%d\n",tot);
    return 0;
}