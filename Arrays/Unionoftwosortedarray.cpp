#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter the size of first array: ";
    cin>>n1;
    cout<<"Enter the size of second array: ";
    cin>>n2;
    vector<int> arr1(n1),arr2(n2);
    cout<<"Enter the elements of first sorted array: ";
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    cout<<"Enter the elements of second sorted array: ";
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    int i=0;
    int j=0;
    vector<int> ans;
    //This solution is the optimal approach to solve this union of two sorted arrays
    while(i<n1 && j<n2){
        if(arr1[i]<=arr2[j]){
            if(ans.empty() || ans.back()!=arr1[i]){
                ans.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(ans.empty() || ans.back()!=arr2[j]){
                ans.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(i<n1){
        if(ans.empty() || ans.back()!=arr1[i]){
            ans.push_back(arr1[i]);
        }
        i++;
    }
    while(j<n2){
        if(ans.empty() || ans.back()!=arr2[j]){
            ans.push_back(arr2[j]);
        }
        j++;
    }
    cout<<"Union of two sorted arrays: ";
    for(int x:ans){
        cout<<x<<" ";
    }
}