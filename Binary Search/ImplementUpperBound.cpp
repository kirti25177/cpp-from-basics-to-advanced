#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int UpperBound(const vector<int> &arr,int n,int x){
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=low+(high-low)/2;
        //This prevents the overflow 
        if(arr[mid]>x){
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
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the element to find upper bound: ";
    cin>>x;
    int u=UpperBound(arr,n,x);
    cout<<"Upper Bound is: "<<u;
}