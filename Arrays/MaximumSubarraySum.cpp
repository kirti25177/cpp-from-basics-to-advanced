#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //This is the brute force solution for finding maximum subarray sum which takes the time complexity of O(n^3) approx.
    int maxi=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=arr[k];
            }
            maxi=max(maxi,sum);
        }
    }
    cout<<"Maximum Subarray Sum is: "<<maxi;
}