#include <iostream>
using namespace std;

void findPairWithSum(const int arr[], int n, int X) {
    int left = 0, right = n - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == X) {
            cout << "Pair found: (" << arr[left] << ", " << arr[right] << ")" << endl;
            return;
        } else if (sum < X) {
            left++;
        } else {
            right--;
        }
    }

    cout << "No pair found with sum " << X << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int X = 10;

    findPairWithSum(arr, n, X);

    return 0;
}