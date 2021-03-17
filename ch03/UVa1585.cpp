#include<string.h>
#include<stdio.h>
#define maxn 100

int main()
{
    int T;
    scanf("%d",&T);
    char s[maxn];
    while(T--){
        scanf("%s",s);
        int n = strlen(s);
        int mark[n];
        int score = 0;//总得分
        for(int i = 0;i < n;i++){
            if(s[i] == 'O' )  mark[i] = 1; 
            else  mark[i] = 0;
        }
        for(int i = 0;i < n;i++){
            if(mark[i] == 1 && i)  mark[i] = mark[i] + mark[i-1];
        }
        for(int i = 0;i < n;i++)   score += mark[i];
        printf("%d\n",score);
    }
    return 0;
    

}