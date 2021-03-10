# include<stdio.h>

int main()
{
    int a,b,n,m;
    scanf("%d%d",&n,&m);
    a = (4*n - m)/2; //鸡的数量
    b = n - a;  //兔子的数量
    if(m%2 == 1 || a  < 0 || b < 0)
        printf("No answer\n");
    else 
        printf("%d %d\n",a ,b );
}