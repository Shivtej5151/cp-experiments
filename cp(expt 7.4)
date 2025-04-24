#include <iostream>
#include <vector>

using namespace std;

vector<int> intersectionOfSortedArrays(const vector<int>& arr1, const vector<int>& arr2) {
    vector<int> intersection;
    int i = 0, j = 0;

    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) {
            ++i;
        } else if (arr1[i] > arr2[j]) {
            ++j;
        } else {
            if (intersection.empty() || intersection.back() != arr1[i]) {
                intersection.push_back(arr1[i]);
            }
            ++i;
            ++j;
        }
    }

    return intersection;
}

int main() {
    vector<int> arr1 = {1, 2, 4, 5, 6};
    vector<int> arr2 = {2, 4, 6, 8};

    vector<int> result = intersectionOfSortedArrays(arr1, arr2);

    cout << "Intersection: ";
    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}
