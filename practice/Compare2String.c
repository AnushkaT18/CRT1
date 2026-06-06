#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50],str2[50];
    printf("Enter the first string\n");
    scanf("%s",str1);
    printf("Enter the second string\n");
    scanf("%s",str2);
    if(strcmp(str1,str2)==0)
        printf("Equal\n");
    else
        printf("Equal\n");
    return 0;
}
