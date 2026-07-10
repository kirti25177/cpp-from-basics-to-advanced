#include <iostream>
#include <vector>
using namespace std;
//Binary Search always works on when the array is sorted.
//Make sure to implement Binary Search when the array is sorted.
int binarySearch(vector<int>& arr, int low,int high, int target) {
    int low = 0;
    int high = arr.size() - 1;
    if(low>high){
        return -1; //This is the base condition of array.
    }
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            // low=mid+1;
            binarySearch(arr,mid+1,high,target);
        }
        else {
            // high=mid-1;
            binarySearch(arr,low,mid-1,target);
        }
    }

    return -1; // Element not found
}

int main() {
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the target element: ";
    cin>>target;

    int index = binarySearch(arr,0,n-1,target);

    if (index != -1)
        cout << "Element found at index " << index;
    else
        cout << "Element not found";

    return 0;
}