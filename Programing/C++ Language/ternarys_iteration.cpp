#include <iostream>

using namespace std;
// Function to perform ternary search
int ternarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid1 = left + (right - left) / 3;
        int mid2 = right - (right - left) / 3;

        if (arr[mid1] == key) {
            return mid1;
        }

        if (arr[mid2] == key) {
            return mid2;
        }

        if (key < arr[mid1]) {
            right = mid1 - 1;
        } else if (key > arr[mid2]) {
            left = mid2 + 1;
        } else {
            left = mid1 + 1;
            right = mid2 - 1;
        }
    }

    // Key not found
    return -1;
}

// Driver code
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
cout << "Enter the elements in ascending order: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the key to search: ";
    cin >> key;

    int index = ternarySearch(arr, 0, n - 1, key);

    if (index != -1) {
        cout << "Element found at index " << index << endl;
    } else {
        cout << "Element not found" <<endl;
    }

    return 0;
}
