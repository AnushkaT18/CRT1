#include<stdio.h>
int main()
{
    int i=0;
    char s[4]={'\0','\0','\0','\0'};
    for(i=0;i<4;i++)
    {
        printf("%c",s[i]);
    }
    return 0;
}
//no output
//\0= Null. Thus compiler prints nothing
