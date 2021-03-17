#include<stdio.h>

int main()
{
    int c,q = 1;//q为左右引号标识变量  1：左 0：右
    while((c = getchar()) != EOF){
        if(c == '"')  {printf("%s",q ? "``" : "''");q =!q;}
        else printf("%c",c);
    }
    return 0;

}