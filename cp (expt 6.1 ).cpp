#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int target) {
    if (left > right) {
        return -1; // Target not found
    }

    int mid = left + (right - left) / 2;

    if (arr[mid] == target) {
        return mid; // Target found
    } else if (arr[mid] > target) {
        return binarySearch(arr, left, mid - 1, target); // Search in the left half
    } else {
        return binarySearch(arr, mid + 1, right, target); // Search in the right half
    }
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}