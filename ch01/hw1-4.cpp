#include<stdio.h>
#include<math.h>

int main()
{
    const double pi = acos(-1.0);
    int n;
    scanf("%d",&n);
    double sinf = sin(n/180.0*pi);//一定要写180.0，要不然取商而不是取全部
    double cosf = cos(n/180.0*pi);
    printf("%lf %lf\n",sinf,cosf);
    return 0;
}