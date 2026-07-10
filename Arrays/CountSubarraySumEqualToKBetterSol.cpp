#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the elements of array: ";
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m;
    cout<<"Enter target sum K: ";
    cin>>m;
    int count=0;
    //This is the better solution which takes the time complexity of O(n^2) which is better than brute force solution which takes the time complexity of O(n^3).
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
        }
        if(sum==m){
            count++;
        }
    }
    cout<<"Number of Subarray Sum Equal to K: "<<count;
}