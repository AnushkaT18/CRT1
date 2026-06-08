#include<iostream>
using namespace std;
int power(int base,int exp)//(2,4)
{
    if(exp == 0)//base condition
    {
        return 1;
    }
    return base * power(base,exp-1);//2*2*2*2*2*1=32
}
int main()
{
    cout<<power(2,5);
    return 0;
}
