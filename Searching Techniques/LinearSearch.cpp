#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int t;
    cout<<"Enter target element: ";
    cin>>t;
    for(int i=0;i<n;i++){
        if(arr[i]==t){
            return i;
        }
    }
    return -1;
}