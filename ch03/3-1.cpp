#include<stdio.h>
#define maxn 105
int a[maxn];//把数组定义在main函数外面可以把数组开的比较大
            //如果数组定义在main函数里面数组开的大了会出问题

int main()
{
    int x,n = 0;
    while(1)
    {
        scanf("%d",&x);
        if(x == -98765)  break;
        a[n++] = x;
    }
    for(int i = n-1;i>=1;i--)
        printf("%d ",a[i]);
    printf("%d\n",a[0]);
    return 0;
}