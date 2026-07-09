#include <iostream>
#include <vector>
using namespace std;
//Binary Search always works on when the array is sorted.
int binarySearch(vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return -1; // Element not found
}

int main() {
    vector<int> arr = {2, 5, 8, 12, 16, 23, 38, 56};
    int target = 23;

    int index = binarySearch(arr, target);

    if (index != -1)
        cout << "Element found at index " << index;
    else
        cout << "Element not found";

    return 0;
}