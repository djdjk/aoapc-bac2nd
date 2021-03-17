#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define maxn 100
char ch[] = {'C','H','O','N'};
float d[] = {12.01,1.008,16.00,14.01};

int main()
{
    int T;
    scanf("%d",&T);
    char s[maxn];
    while(T--){
        scanf("%s",s);
        int n = strlen(s);
        float sum = 0.0;
        //逆序！！！太绝了
        for(int i = (n-1);i >= 0;i--){
            int num = 1;
            if(isdigit(s[i])) {
                num = s[i] - '0';i--;
                if(isdigit(s[i])) {num += (s[i] - '0')*10; i--;}
            }
            if(isalpha(s[i])) {
                for(int k = 0 ; k < 4 ;k++)
                    if(s[i] == ch[k]) {sum += num*d[k];break;}
            }
        }
        printf("%.3f\n",sum);
    }
    return 0;
}