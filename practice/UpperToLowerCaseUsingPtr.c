#include <stdio.h>

void mystrlwr(char *s);

int main()
{
    char ch[20];

    printf("\n Enter any String : ");
    scanf(ch);

    mystrlwr(ch);

    printf("\nUpper case String is ");
    puts(ch);

    return 0;
}

void mystrlwr(char *s)
{
    while (*s != '\0')
    {
        *s = *s + 32;
        s++;
    }
}
