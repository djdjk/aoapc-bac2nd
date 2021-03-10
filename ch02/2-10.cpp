#define LOCAL
#include<stdio.h>
#define INF 1000000

int main()
{
#ifdef LOCAL
    freopen("datain.txt","r",stdin);
    freopen("dataout.txt","w",stdout);
#endif

    int x,n = 0,min = INF,max = -INF,s = 0;
    while(scanf("%d",&x) != EOF){
        printf("%d\n",n);
        s += x;
        if(x<min)  min = x;
        if(x>max)  max = x;
        n++;
    }
    printf("%d %d %.3f\n",min,max,(double)s/n);
    fclose(stdin);//关闭重定向输入
	fclose(stdout);//关闭重定向输出 

    return 0;
}