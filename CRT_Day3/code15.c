#include<stdio.h>
int main()
{
    char str[]="\0";//null character -> \0
    if(printf("%s,str"))
    printf("inside if block");
    else
    printf("inside else block");
    return 0;
}
//the print statement or expression inside if block prints nothinng.so the exp returns 0 and else block gets execute
