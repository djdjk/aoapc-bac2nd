#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h,m;
    //由1~9组成的三位数最小的是123，最大的是987，
    //所以满足1：2：3的三位数里面最小的是123~987/3 
    //即123~329
    for(int i = 123;i<=329;i++)
    {
        int j = 2*i;
        int k = 3*i;
        a = i/100;
        b = i/10%10;
        c = i%10;
        d = j/100;
        e = j/10%10;
        f = j%10;
        g = k/100;
        h = k/10%10;
        m = k%10;

        if(a+b+c+d+e+f+g+h+m == 45 && a*b*c*d*e*f*g*h*m == 362880)
            printf("%d %d %d\n",i,j,k);
    }
    return 0;
}