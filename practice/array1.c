#include<stdio.h>
int main()
{
    char name[10],ch;
    int i=0;
    printf("Enter name: ");
    while(i<10)
    {
        ch = getchar();
        name[i] = ch;
        i++;
    }
    name[i]='\0';
    printf("Name:%s",name);
    return 0;
}
