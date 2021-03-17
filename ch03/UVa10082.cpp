#include<stdio.h>

int main()
{
    int i,c;
    char s[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    while((c = getchar()) != EOF){
        for(i = 1;s[i]&&(s[i]!=c) ; i++);
        if(s[i]) printf("%c",s[i-1]);
        else printf("%c",c);

    }

    return 0;
}