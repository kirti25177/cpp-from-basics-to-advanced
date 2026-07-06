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
    int target;
    cout<<"Enter your target element: ";
    cin>>target;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            cout<<"Element found at index: "<<i;
            return 0;
        }
    }   
    cout<<"Element not found";
}