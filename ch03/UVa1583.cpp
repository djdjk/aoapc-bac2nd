#include<stdio.h>
#include<string.h>
#define maxn 100100

int ans[maxn];

int main()
{
    int T,n;
    memset(ans,0,sizeof(ans));
    for(int m = 1;m<maxn;m++){
        int x = m,y = m;
        while(x){y+=x%10; x = x/10;} 
        if(ans[y] == 0 || m<ans[y]) ans[y] = m;//数组不会越界嘛？
    }

    scanf("%d",&T);
    while(T--){
        scanf("%d",&n);
        printf("%d\n",ans[n]);
    }
    return 0;
}