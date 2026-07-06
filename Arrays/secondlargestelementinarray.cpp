#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //The time complexity of this code will be O(n) which is much better than brute force solution which is O(n log n) as we will firstly sort the array in ascending order and then print arr[n-2].
    //Also there is a big problem in brute force solution like for example if the array is like 1,2,3,4,5,5 then it will print 5 as second largest element however the ans is 4.
    int largest=arr[0];
    int second_largest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            second_largest=largest;
            largest=arr[i];
        }
        else if(arr[i]>second_largest && arr[i]!=largest){
            second_largest=arr[i];
        }
    }
    cout<<"Second largest element in array: "<<second_largest;
    return 0;
}