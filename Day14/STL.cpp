#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    int arr[]={3,5,1,2,4};
    //Sort the array in ascending order
    //std::sort(std::begin(arr),str::end(arr));
    sort(begin(arr),end(arr));
    //print the sorted array
    for(int i:arr)//range
    {
        cout<<i<<" ";
    }
    return 0;

}
