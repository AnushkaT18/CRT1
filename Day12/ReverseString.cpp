#include<iostream>
using namespace std;

void reverseString(char str[],int start,int end)
{
    if(start >= end)//base condition    1>3
        return;
    char temp = str[start];//temp=E
    str[start]=str[end];//[0,L,0,E,H]
    str[end]=temp;

    reverseString(str,start + 1,end - 1);
}
int main()
{
    char str[]="HELLO";//OELLH
    reverseString(str,0,4);//calling function
    cout<<str;
    return 0;
}
