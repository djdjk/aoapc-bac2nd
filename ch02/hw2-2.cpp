#include<stdio.h>

int main()
{
    FILE *fin;
    fin = fopen("hanxin.txt","rb");
    int a,b,c,kase = 0;
    while(fscanf(fin,"%d%d%d",&a,&b,&c) != EOF)
    {
        kase++;
        int  flag = 0;
        // scanf("%d%d%d",&a,&b,&c);
        for(int n = 10;n <= 100; n++)
        {
            if(n%3 == a && n%5 == b && n%7 == c)
            {
                flag  = 1;
                printf("Case %d : %d\n",kase,n);
                break;
            }
        }
        if(!flag)  printf("Case %d : No answer\n",kase);
    }


    // int x,flag = 0;
    // for(int n = 10;n <= 100; n++)
    // {   
    //     int data = 3,a,b,c;
    //     while(fscanf(fin,"%d",&x) != EOF && data)
    //     {
    //         if(data == 3) a = x;
    //         if(data == 2) b = x;
    //         if(data == 1) c = x;
    //         data--;
    //     }
    //     if(n%3 == a && n%5 == b && n%7 == c)
    //     {
            
    //     }

    // }
    
    return 0;
}