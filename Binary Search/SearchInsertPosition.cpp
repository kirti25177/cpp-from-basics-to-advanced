//In this ques, if the array has that element return its index and if the array has not that element then insert it 
//Preserving the sorting order

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int InsertPosition(const vector<int> arr,int n,int x){
    //We want to find the index 
    //May or may not be that ans 
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=low+(high-low)/2;
        //This prevents the overflow
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
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the element to be inserted: ";
    cin>>x;
    int I=InsertPosition(arr,n,x);
    cout<<"Index at which the element should be inserted: "<<I;
}