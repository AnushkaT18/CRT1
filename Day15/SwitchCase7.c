#include<stdio.h>
int main()
{
    int num = 0;
    if(num++,num--,++num)
        switch(num)

    {
        case 1:
    printf("case 1 executed\n");
    break;
        case 2:
     printf("case 2 executed");
    break;
      default:
    printf("default executed");
    break;
    }
    return 0;
}






