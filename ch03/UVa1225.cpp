#include<stdio.h>
#include<string.h>
#define maxn 40000 //输入字符串最大长度
char s[maxn];
char digit[] = {'0','1','2','3','4','5','6','7','8','9'};


int main()
{
    int T;
    scanf("%d",&T);
    while(T--){
        int n;
        scanf("%d",&n);
        int ch = 0;
        int num[10] = {0};
        for(int i = 1;i <= n;i++){
            int x = i;
            while(x) {int mod = x%10;x = x/10;s[ch++] = mod+'0';}
        }
        s[ch] = '\0';
        // printf("%s\n",s);
        int len = strlen(s);
        for(int i = 0;i < len;i++){
            for(int k = 0; k < 10;k++)
                if(s[i] == digit[k]) {num[k]++;break;}
        }
        for(int i = 0 ;i < 9;i++)
            printf("%d ",num[i]);
        printf("%d\n",num[9]);
    }
    return 0;
}