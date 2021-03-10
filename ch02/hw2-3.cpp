#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i = n;i>0;i--)
    {
        int c1 = 2*i-1;//#的个数
        if(i < n)
        {
            int c2 = ((2*n-1)-(2*i-1))/2;//空格个数
            for(int j = 0;j<c2;j++)
            {
                printf(" ");
            }
        }
        for(int k = 0;k<c1;k++)
        {
            printf("#");
        }
        printf("\n");
        
    }
    return 0;
    
}