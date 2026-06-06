#include<iostream>
using namespace std;
void generatePrimes(int start,int end)
{
    for(int i = start; i<=end; i++)
    {
        if(i<2)
            continue;
        bool isPrime = true;
        for(int j=2; j<=i/2;j++)
        {
            if(i%j==0)//%gives the remainder
            {
                isPrime = false;
                break;
            }
        }
        if(isPrime)
            cout<<i<<" ";
    }
}
int main()
{
    generatePrimes(1,20);
    return 0;
}
