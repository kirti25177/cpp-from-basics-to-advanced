#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //The time complexity of this code will be O(n) which is much better than brute force solution which is O(n log n) as we will firstly sort the array in desending order and then print arr[n-2].
    //Also there is a big problem in brute force solution like for example if the array is like 5,5,4,3,2,2,1,1 then it will print 1 as second smallest element however the ans is 2.
    int smallest=arr[0];
    int second_smallest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            second_smallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]<second_smallest && arr[i]!=smallest){
            second_smallest=arr[i];
        }
    }
    cout<<"Second smallest element in array: "<<second_smallest;
    return 0;
}