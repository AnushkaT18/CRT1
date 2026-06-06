#include<iostream>
using namespace std;
int linearsearch(int arr[],int size,int target)
{
    for(int i=0;i<size;i++)//size=10
    {
        if(arr[i]==target)//1==7;7 ==7
        {
            return i;//index 6
        }

    }
    return -1
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 7;
    int result=linearsearch(arr,size,target);
    if(result != -1)
    {
        cout<<"Element found at index no="<<result<<endl;
    }
    else
    {
        cout<<"Element not found";

    }
}
