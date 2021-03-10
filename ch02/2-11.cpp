#include<stdio.h>
#define INF 1000000

int main()
{
    FILE *fin,*fout;
    fin = fopen("datain.txt","rb");
    fout = fopen("dataout2.txt","wb");
    int x,n = 0,min = INF,max = -INF,s = 0;
    while(fscanf(fin,"%d",&x) != EOF){
        fprintf(fout,"%d\n",n);
        s += x;
        if(x<min)  min = x;
        if(x>max)  max = x;
        n++;
    }
    fprintf(fout,"%d %d %.3f\n",min,max,(double)s/n);
    fclose(fin);//关闭输入
	fclose(fout);//关闭输出 

    return 0;
    
}