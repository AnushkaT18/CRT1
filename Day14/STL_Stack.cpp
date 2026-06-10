#include<stack>
#include<iostream>
using namespace std;
int main()
{
    stack<int>stack;
    stack.push(21);//the values puushed in the stack should be of the same data ehich is written during declarationof stack
    stack.push(22);
    stack.push(23);
    stack.push(25);
    cout<<stack.top()<<" ";
    int num=0;
    stack.push(num);//[21,22,23,25,0]
    stack.pop();//[21,22,23,25]
    stack.pop();//[21,22,23]

    while(!stack.empty())
    {
        cout<<stack.top()<<" ";
        stack.pop();
    }
    return 0;
}
