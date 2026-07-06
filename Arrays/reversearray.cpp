#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"After reversing the array: ";
    int left=0;
    int right=n-1;
    while(left<right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}