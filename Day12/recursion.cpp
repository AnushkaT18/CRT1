//Recursion=a way of solving a problem by having a function calling itself
//-Performing the same operation multiple times with different input
//recursion use stack memory
//when you use recursion if there are so many drwabacks?? ,operation on tree
//We use recursion in the cases we know that a problem can be divided into similar sub problems



//
#include<iostream>
using namespace std;
void printNumbers(int n)
{
    if(n==0)
    {
        return;
    }
    printNumbers(n-1);
    cout<<n<<"  ";
}
int main()
{
    int n=5;
    printNumbers(n);
    return 0;
}
