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
    //This is the Optimal solution 
    //This takes the space complexity of O(n) and time complexity O(n).
    int posIndex=0;
    int negIndex=1;
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            ans[negIndex]=arr[i];
            negIndex+=2;
        }
        else{
            ans[posIndex]=arr[i];
            posIndex+=2;
        }
    }
    for(int x: ans){
        cout<<x<<" ";
    }
}