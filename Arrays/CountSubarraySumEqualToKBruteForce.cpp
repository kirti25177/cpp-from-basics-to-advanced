#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m;
    cout<<"Enter target Sum K: ";
    cin>>m;
    int count=0;
    //This is the brute force solution which takes the time complexity of O(n^3) approximately.
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=arr[k];
            }
            if(sum==m){
                count++;
            }
        }
    }
    cout<<"Number of Subarray with sum equal to K are: "<<count;
}