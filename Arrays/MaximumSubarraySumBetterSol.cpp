#include<iostream>
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
    //This is the better solution to find the maximum subarray sum as it takes the time complexity of O(n^2) which is better than brute force solution that takes the time complexity of O(n^3).
    int maxi=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            maxi=max(maxi,sum);
        }
    }
    cout<<maxi;
}