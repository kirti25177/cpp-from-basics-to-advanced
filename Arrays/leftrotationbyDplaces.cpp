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
    int d;
    cout<<"Enter how many times you want to left rotate the array: ";
    cin>>d;
    //The brute force solution 
    d=d%n; //This is done to avoid unnecessary rotations. For example, if the array size is 5 and we want to rotate it 7 times, it is equivalent to rotating it 2 times (7%5=2).
    //The timecomplexity of brute force solution is O(n*d) as we will rotate the array d times and each time we will rotate the array by 1 place which will take O(n) time.
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    int j=0;
    for(int i=n-d;i<n;i++){
        arr[i]=arr[j];
        j++;
    }
    cout<<"Array after left rotation by "<<d<<" places: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    //Optimal solution can be obtain by reversing the array in three steps. First we will reverse the first d elements of array, then we will reverse the remaining n-d elements of array and finally we will reverse the whole array. The time complexity of optimal solution is O(n) as we will reverse the array three times which will take O(n) time.
}