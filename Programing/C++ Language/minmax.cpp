#include <iostream>
#include <climits>

void findMinMax(int arr[], int size, int& minVal, int& maxVal) {
    minVal = INT_MAX;
    maxVal = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
}

int main() {
    int arr[] = {5, 9, 2, 11, 3, 7, 15};
    int size = sizeof(arr) / sizeof(arr[0]);

    int minVal, maxVal;
    findMinMax(arr, size, minVal, maxVal);

    std::cout << "Minimum: " << minVal << std::endl;
    std::cout << "Maximum: " << maxVal << std::endl;

    return 0;
}
