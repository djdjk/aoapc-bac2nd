#include<stdio.h>
#include<math.h>

int main()
{
    for(int n = 100;n<1000;n++)
    {
        int a = n/100, b = n/10%10, c = n%10;
        if(n == (int)(pow(a,3) + pow(b,3) + pow(c,3)))
            printf("%d\t",n);
    }
        
    return 0;
}