#include<stdio.h>

int main()
{
    int x,n = 0,min = 10000,max = 0,s = 0;
    while(scanf("%d",&x) == 1){
        s += x;
        if(x<min)  min = x;
        if(x>max)  max = x;
        n++;
    }
    printf("%d %d %.3f\n",min,max,(double)s/n);
    return 0;
}