#include<queue>
#include<iostream>
using namespace std;
//print the queue
void showq(queue<int>gq)//[11,22,33],[22,33],[33],[]
{
    queue<int>g=gq;
    while(!g.empty())
    {
        cout<<'\t'<<g.front();
        g.pop();
    }
    cout<<'\n';
}
int main()
{
    queue<int>que;
    que.push(11);
    que.push(22);
    que.push(33);
    cout<<"the queue que is:";
    showq(que);


    cout<<"\n queue.size(): "<<que.size();
    cout<<"\n queue.front(): "<<que.front();
    cout<<"\n queue.back(): "<<que.back();

    cout<<"\n que.pop(): ";
    que.pop();
    showq(que);
    return 0;

}
