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
    int sum=0;
    int mini=INT_MAX;
    //Time Complexity for this is O(n) This is the most Optimal Solution 
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum<mini){
            mini=sum;
        }
        if(sum>0){
            sum=0;
        }
    }
    cout<<"Minimum Subarray Sum is: "<<mini;   
}