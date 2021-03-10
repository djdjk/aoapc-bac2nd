#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    double av = (a+b+c)/3;

    printf("%.3lf\n",av);
    return 0;
}