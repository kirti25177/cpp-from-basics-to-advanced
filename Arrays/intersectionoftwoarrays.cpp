#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter the size of first sorted array: ";
    cin>>n1;
    cout<<"Enter the size of second sorted array: ";
    cin>>n2;
    vector<int> arr1(n1), arr2(n2);
    cout<<"Enter the elements of first array: ";
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    cout<<"Enter the elements of second array: ";
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    int i=0;
    int j=0;
    vector<int> ans;
    while(i<n1 && j<n2){
        //Suppose two arrays a1={1,2,3} and a2={2,3} 
        //See this, 1<2 so we have to move the pointer i 
        if(arr1[i]<arr2[j]){
            i++;
        }
        //Suppose two arrays a1={2,3,4} and a2={1,1,2,3}
        // See this 2>1 so we will move pointer j  
        else if(arr1[i]>arr2[j]){
            j++;
        }
        //else condition is for if arr1[i]==arr2[j]
        //If both are equal we will add the element in array and move both the pointers
        else{
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    for(int x: ans){
        cout<<x<< " ";
    }
}