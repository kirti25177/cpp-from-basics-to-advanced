#include<iostream>
using namespace std;
#include<set>
#include<vector>
int main(){
    int n1,n2;
    cout<<"Enter the size of first array: ";
    cin>>n1;
    cout<<"Enter the size of second array: ";
    cin>>n2;
    int arr1[n1];
    int arr2[n2];
    cout<<"Enter the elements of first array: ";
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    cout<<"Enter the elements of second array: ";
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    //this is brute force solution to find union of two sorted arrays
    //this takes time complexity of O(n1(logn1) + n2(logn2))
    //this takes space complexity of O(n1+n2)
    set<int> st;
    for(int i=0;i<n1;i++){
        st.insert(arr1[i]);
    }
    for(int i=0;i<n2;i++){
        st.insert(arr2[i]);
    }
    vector<int> ans;
    for(auto it: st){
        ans.push_back(it);
    }
    cout<<"Union of the two sorted array: ";
    for(int x:ans){
        cout<<x<<" ";
    }
}