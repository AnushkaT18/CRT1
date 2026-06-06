#include <iostream>
using namespace std;

int linearsearch(int arr[], int size, int target)
{
    int count = 0;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] == target)
        {
            count++;
        }
    }

    if(count > 0)
        return count;
    else
        return -1;
}

int main()
{
    int arr[] = {3,4,6,7,2,3,2,4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 2;

    int result = linearsearch(arr, size, target);

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
//o(n)
//arr=[3,4,6,7,2,3,2,4]
//target = 2
//if element found so return the count =3
//else:
//if element not found return -1

