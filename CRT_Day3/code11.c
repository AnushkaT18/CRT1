#include<stdio.h>
int main()
{
    int a=5;
    a=(1,2,3);
    printf("%d",a);
    return 0;
}
//priority for the value assigned to any variable is given from right to left
