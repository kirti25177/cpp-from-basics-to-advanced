#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> arr(n);
    vector<int> pos;
    vector<int> neg;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>=0){
            pos.push_back(arr[i]);
        }
        else{
            neg.push_back(arr[i]);
        }
    }
    //This case is only valid if no of positive in array is equal to no of negative elements in array
    //This is the brute force solution for rearranging the array elements by sign.
    //Positives and Negatives are stored which takes the space complexity of O(n).
    //Time complexity is O(2N); 
    for(int i=0;i<n/2;i++){
        arr[2*i]=pos[i];
        arr[2*i+1]=neg[i];
    }
    for(int x: arr){
        cout<<x<<" ";
    }
}