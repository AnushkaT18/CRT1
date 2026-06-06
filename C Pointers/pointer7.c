//Print value of array using pointer and subscript notation
#include <stdio.h>
int main()
{
    int arr[5]={5,10,20,25,30},i=0;
    for(i=0;i<5;i++)
    {
         printf("value of a=[%d]\n",i);
         printf("%d\n",arr[i]);
         printf("%d\n",i[arr]);
         printf("%d\n",*(arr+i));
         printf("%d\n",*(i+arr));
    }


    return 0;
}

