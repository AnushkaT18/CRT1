#include<stdio.h>
#include<string.h>
int main()
{
    char a[20]="Anushka";
    char b[20]={'A','n','u','s','h','k','a','\0'};
    char c[20];
    printf("Enter string: ");
    gets(c);
    printf("Lenght of string a=%d\n",strlen(a));
    printf("Lenght of string b=%d\n",strlen(b));
    printf("Lenght of string c=%d\n",strlen(c));
    return 0;
}
