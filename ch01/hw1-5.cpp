#include<stdio.h>

int main()
{
    float unit = 95.0;//衣服单价
    int n;//件数
    scanf("%d",&n);
    float all = n*unit;
    if(all >= 300) 
        all = all*0.85;
    
    printf("%.2f\n",all);
    return 0;
}