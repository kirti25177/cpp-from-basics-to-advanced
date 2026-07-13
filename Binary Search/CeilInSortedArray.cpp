#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int CeilElement(const vector<int> &arr,int n,int x){
    int low=0;
    int high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>=x){
            ans=arr[mid];
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
    cout<<"Enter the elements of array: ";
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the target element: ";
    cin>>x;
    int c=CeilElement(arr,n,x);
    cout<<"Ceil Element in Sorted array is: "<<c;
}