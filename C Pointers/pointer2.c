//Program for dereferencing pointer
#include<stdio.h>
int main()
{
    int a=87;
    int *p1=&a;
    printf("Address of a = %u.\n",&a);
    printf("Address of p1 = %u.\n",&p1);
    printf("Value of p1 %d.\n",p1);
    printf("Value of a %d.\n",a);
    printf("Value of a %d.\n",*p1);
    printf("Value of a %d.\n",*(&a));

    return 0;
}

