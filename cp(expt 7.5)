#include <iostream>
#include <algorithm> // for sort
using namespace std;

int kthSmallest(int arr[], int n, int k) {
    sort(arr, arr + n); // Sort the array
    return arr[k - 1];  // k-th smallest is at index k-1
}

int main() {
    int n, k;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the value of k: ";
    cin >> k;

    if(k > 0 && k <= n) {
        int result = kthSmallest(arr, n, k);
        cout << "The " << k << "th smallest element is: " << result << endl;
    } else {
        cout << "Invalid value of k!" << endl;
    }

    return 0;
}
