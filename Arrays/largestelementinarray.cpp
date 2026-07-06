#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter elements of array:";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int largest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    //Time complexity of this code is O(n) which is much better than brute force solution which is O(nlogn) as we will sort the array firstly in ascending orderand then print arr[n-1];
    cout<<"Largest element in array is: "<<largest;
    return 0;
}