#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //The Brute force solution might be sorting the array in descending order so that all the zeroes will be at the end of array
    //Time complexity of brute force solution will be O(nlogn) as we will sort the array firstly in descending order and then print the elements of array from 0 to n-1.
    //But there is one problem with brute force solution that is it will change the order of elements in array which is not allowed in this problem.
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }

    cout<<"Array after moving all zeroes to the end: ";
    for(int i=0;i<n;i++){   
        cout<<arr[i]<<" ";
        }
}