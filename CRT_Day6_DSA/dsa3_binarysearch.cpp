#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int target)
{
    int low = 0;//arr[0]
    int high = size-1;//last element
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid] == target)
        {
            return mid;
        }
        else if(arr[mid] < target)
        {
            low = mid+1;//move toward right
        }
        else
        {
            high = mid-1;//move toward left
        }
    }
    return -1;

}
int main()
{
    int arr[] = {10,20,30,40,50,60};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 50;
    int result = binarySearch(arr, size, target);//calling function

    if(result != -1)
    {
        cout << "Element found " << result << " times" << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}
