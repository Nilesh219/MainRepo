#include <iostream>

using namespace std;
int TernarySearch(int array[], int low, int high, int key)
{

    if (low <= high)
    {

        int mid1 = low + (high - low) / 3;
        int mid2 = high - (high - low) / 3;
        if (key == array[mid1])
        {
            return mid1;
            cout << "Element found at mid1 " << endl;
        }
        if (key == array[mid2])
        {
            return mid2;
            cout << "Element found at mid2 " << endl;
        }
        if (key < array[mid1])
        {
            return TernarySearch(array, low, mid1 - 1, key);
        }
        if (key > array[mid2])
        {
            return TernarySearch(array, low + 1, high, key);
        }

        return TernarySearch(array, mid1 + 1, mid2 - 1, key);
    }
    return -1;
}
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array = " ;
    cin >> n;
    int array[n]; // = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < n; i++)
    {
        cout << "Element " << i << ": ";
        cin >> array[i];
    }
   // int n = sizeof(array) / sizeof(array[0]);
    int key = 6;
    int result = TernarySearch(array, 0, n - 1, key);
    if (result == -1)
    {
        cout << "Element not Found " << endl;
    }
    else
    {
        cout << "Element Found at index " << result << endl;
    }
    return 0;
}
