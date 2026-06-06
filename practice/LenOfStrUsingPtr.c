#include <stdio.h>
#include <string.h>

void mystrlen(char *s1);

int main()
{
    char str1[20];

    printf("\nEnter Any String: ");
    fgets(str1, sizeof(str1), stdin);

    mystrlen(str1);

    return 0;
}

void mystrlen(char *s1)
{
    int length = 0;

    while (*s1 != '\0' && *s1 != '\n')
    {
        length++;
        s1++;
    }

    printf("Length is %d", length);
}
