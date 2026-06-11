#include<stdio.h>
int main()
{
    int i=1;
    switch(i)
    {
        case 1:
            printf("Hi  ");
        default://when every case fails then default block runs
            printf("Hello");

    }
    return 0;
}
