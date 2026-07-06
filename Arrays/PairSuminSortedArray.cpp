#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){   
        cin>>arr[i];
    }   
    //Brute force solution can be we can use two loops to find the pair of elements whose sum is equal to the given number. The time complexity of brute force solution will be O(n^2) as we will use two loops to find the pair of elements whose sum is equal to the given number.
    //Optimized solution can be we can use two pointers to find the pair of elements whose sum is equal to the given number. The time complexity of optimized solution will be O(n) as we will use two pointers to find the pair of elements whose sum is equal to the given number.
    int target;
    cout<<"Enter target sum: ";
    cin>>target;
    int left=0;
    int right=n-1;
    while(left<right){
        int sum=arr[left]+arr[right];
        if(sum==target){
            cout<<"Pair found: ("<<arr[left]<<", "<<arr[right]<<")"<<endl;
            left++;
            right--;
        }
        else if(sum<target){
            left++;
        }
        else{
            right--;
        }
    }
}