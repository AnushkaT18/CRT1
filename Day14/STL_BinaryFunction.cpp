#include<algorithm>
#include<iostream>
using namespace std;
void show(int a[],int arraysize)
{
    for(int i=0;i<arraysize;++i)
        cout<<a[i]<<" ";
}
int main()
{
    int a[]={1,3,5,6,8,9,7,0,4,2};
    int asize=sizeof(a)/sizeof(a[0]);
    cout<<"\n THe array is : \n";
    show(a,asize);
    sort(a,a+asize);
     //sort(a,+asize,greater<int>());
     cout<<"\n\n the array after sorting is:\n";
     //print the array after sorting
     show(a,asize);
    //now we do the binary search
    if (binary_search(a,a+10,2))
        cout<<"\n element found in the array";
    else
        cout<<"\nElement not found in the array";
    return 0;
}
