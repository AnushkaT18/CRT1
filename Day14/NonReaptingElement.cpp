#include<iostream>
using namespace std;
int firstNonRepeating(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if (count==1)
        {
            return arr[i];
        }
    }
    return -1;
}
int main()
{
    int arr[]={1,2,3,2,1,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"First non-repeating element: "<<firstNonRepeating(arr,n);
    return 0;
}

