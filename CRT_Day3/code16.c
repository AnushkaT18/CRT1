#include<stdio.h>
int main()
{
    char str[]="anushka\n";
    if(printf("%s",str))
    printf("inside if block");
    else
    printf("inside else block");
    return 0;
}
