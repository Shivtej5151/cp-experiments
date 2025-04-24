#include <iostream>
using namespace std;

int findFirstOccurrence(const int arr[], int size, int target) {
    int low = 0, high = size - 1;
    int result = -1; // To store the index of the first occurrence
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            result = mid;
            high = mid - 1;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int main() {
    int arr[] = {1, 2, 2, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 2;
    int index = findFirstOccurrence(arr, size, target);
    if (index != -1) {
        cout << "First occurrence of " << target << " is at index " << index << endl;
    } else {
        cout << target << " not found in the array." << endl;
    }
    return 0;
}