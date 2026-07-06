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
    int target;
    cout<<"Enter target sum: ";
    cin>>target;
    //Brute force solution can be we can use three loops to find the triplet of elements whose sum is equal to the given number. The time complexity of brute force solution will be O(n^3) as we will use three loops to find the triplet of elements whose sum is equal to the given number.
    //We can optimize the solution by using two pointers to find the triplet of elements whose sum is equal to the given number. The time complexity of optimized solution will be O(n^2) as we will use two pointers to find the triplet of elements whose sum is equal to the given number.
    for(int i=0;i<n;i++){
        int left=0;
        int right=arr[n-1];
        while(left<right){
            int sum=arr[i]+arr[left]+arr[right];
            if(sum==target){
                cout<<"Triplet found: ("<<arr[i]<<" "<<arr[left]<<" "<<arr[right]<<")"<<endl;
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
}