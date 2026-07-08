#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    //This is the brute force solution which takes the time complexity of O(nlogn) for sorting and input takes O(n).
    //We can optimize this solution which only takes the time complexity of O(n).
    sort(v.begin(),v.end());
    cout<<"Maximum Difference between any two elements: "<< v[n-1]-v[0];
}