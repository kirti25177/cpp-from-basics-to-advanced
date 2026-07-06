#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //The time complexity of this code will be O(n) which is much better than brute force solution
    //Brute force 
    //solution will be to sort the array and then print the elements of array from 0 to n-1 and check if the next element is same as previous element then we will not print it.
    //Time complexity of brute force solution will be O(nlogn) as we will sort the array firstly in ascending order and then print the elements of array from 0 to n-1 and check if the next element is same as previous element then we will not print it.
    cout<<"Array after removing duplicates: ";
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[j]){
            j++;
            arr[j]=arr[i];
        }
    }
    for(int i=0;i<=j;i++){
        cout<<arr[i]<<" ";
    }

}