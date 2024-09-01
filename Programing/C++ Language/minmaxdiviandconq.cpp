#include <iostream>
#include <climits>

struct Pair {
    int minVal;
    int maxVal;
};

Pair findMinMax(int arr[], int low, int high) {
    Pair minMax, leftMinMax, rightMinMax;
    int mid;

    // Base case: Only one element in the subarray
    if (low == high) {
        minMax.minVal = arr[low];
        minMax.maxVal = arr[low];
        return minMax;
    }

    // Base case: Two elements in the subarray
    if (high == low + 1) {
        if (arr[low] < arr[high]) {
            minMax.minVal = arr[low];
            minMax.maxVal = arr[high];
        } else {
            minMax.minVal = arr[high];
            minMax.maxVal = arr[low];
        }
        return minMax;
    }

    // Divide the array into two halves
    mid = (low + high) / 2;
    leftMinMax = findMinMax(arr, low, mid);
    rightMinMax = findMinMax(arr, mid + 1, high);

    // Compare the minimum and maximum from the left and right halves
    if (leftMinMax.minVal < rightMinMax.minVal) {
        minMax.minVal = leftMinMax.minVal;
    } else {
        minMax.minVal = rightMinMax.minVal;
    }

    if (leftMinMax.maxVal > rightMinMax.maxVal) {
        minMax.maxVal = leftMinMax.maxVal;
    } else {
        minMax.maxVal = rightMinMax.maxVal;
    }

    return minMax;
}

int main() {
    int arr[] = {5, 9, 2, 11, 3, 7, 15};
    int size = sizeof(arr) / sizeof(arr[0]);

    Pair minMax = findMinMax(arr, 0, size - 1);

    std::cout << "Minimum: " << minMax.minVal << std::endl;
    std::cout << "Maximum: " << minMax.maxVal << std::endl;

    return 0;
}
