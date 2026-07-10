#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int LowerBound(const vector<int> &arr,int n,int x){
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid =low+(high-low)/2;
        if(arr[mid]>=x){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    //Smallest index at which arr[index]>=x.
    vector<int>arr(n);
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the element: ";
    cin>>x;
    int l= LowerBound(arr,n,x);
    cout<<"Lower Bound Index: "<<l;
}