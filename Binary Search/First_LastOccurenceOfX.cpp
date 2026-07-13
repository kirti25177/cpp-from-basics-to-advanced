#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int LowerBound(const vector<int> &arr,int n,int x){
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=low+(high-low)/2;
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
int upperbound(const vector<int> &arr,int n,int x){
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=low+(high-low)/2;
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
    cout<<"Enter the elements of array: ";
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the target element: ";
    cin>>x;
    int lb=LowerBound(arr,n,x);
    if(lb==n || arr[lb]!=x){
        cout<<"-1 -1";
        return 0;
    }
    int ub=upperbound(arr,n,x);
    cout<<"First Occurence Index: "<<lb<<endl;
    cout<<"Last Occurence Index: "<<ub-1;
}