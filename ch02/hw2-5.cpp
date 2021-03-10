#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,kase = 0;
    scanf("%d%d%d",&a,&b,&c);
    while(!(a == 0 && b == 0 && c == 0))
    {   
        if(a>1e6 || b>1e6 || c>100) 
        {
            printf("Foul！Input again!\n"); 
            scanf("%d%d%d",&a,&b,&c);
            continue;
        }
        kase ++;
        double xiaoshu = (double)a/(double)b;
        printf("Case %d : %.*f\n",kase,c,xiaoshu);
        scanf("%d%d%d",&a,&b,&c);
    }
    
    return 0;
}