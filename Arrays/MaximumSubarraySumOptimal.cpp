#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the elements of array: ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    int maxi=INT_MIN;
    int start=0;
    int ans_start=0;
    int ans_end=0;
    //Optimal Solution can be using Kadane's Algorithm. 
    //This takes only the time complexity of O(n) which is far better than better solution and brute force solution
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==0){
            start=i;
        }
        if(sum>maxi){
            maxi=sum;
            ans_start=start;
            ans_end=i;
        }
        if(sum<0){
            sum=0;
            start=i+1;
        }
    }
    cout<<"Maximum Subarray Sum is: "<<maxi;
    cout<<endl;
    cout<<"Maximum length of subarray is: "<<ans_end-ans_start+1;  
}