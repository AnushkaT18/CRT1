#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 3, 2, 7, 8, 2, 1, 5, 5};
    int n = 9;

    cout << "Duplicates: ";

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }

        if (count > 1) {
            bool printed = false;

            for (int k = 0; k < i; k++) {
                if (arr[k] == arr[i])
                    printed = true;
            }

            if (!printed)
                cout << arr[i] << " ";
        }
    }

    return 0;
}
