#include<stdio.h>

int main()
{
    int n,m,kase = 0;
    scanf("%d%d",&n,&m);
    // printf("n:%d m:%d\n",n,m);
    while(!(n == 0 && m == 0))
    {
        kase ++;
        double term,s = 0.0;
        // int flag = 0;
        for(int i = n;i<=m;i++)
        {
            
            term = 1.0/((double)i*(double)i);
            // if(flag<10) {printf("term: %f\n",term);flag++;}
            s += term;
        }
        printf("Case %d : %.5f\n",kase,s);
        scanf("%d%d",&n,&m);
    }
    
    

    return 0;
}