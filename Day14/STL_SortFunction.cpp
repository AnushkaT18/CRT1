#include<algorithm>
#include<iostream>
using namespace std;
void show(int a[],int arr_size)
{
    for(int i=0;i<arr_size;++i)
        cout<<a[i]<<" ";
}
//Driver code
int main()
{
     int a[]={1,5,8,9,6,7,3,4,2,0};
     //size of array
     int asize =sizeof(a)/sizeof(a[0]);
     cout<<"The array before sorting is: \n";
     //print the array
     show(a,asize);
     //sort the array
     sort(a,a+asize);
     //sort(a,+asize,greater<int>());
     cout<<"\n\n the array after sorting is:\n";
     //print the array after sorting
     show(a,asize);
     return 0;
}
