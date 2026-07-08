#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> pos;
    vector<int> neg;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        if(v[i]>=0){
            pos.push_back(v[i]);
        }
        else{
            neg.push_back(v[i]);
        }
    }
    if(pos.size()>neg.size()){
        for(int i=0;i<neg.size();i++){
            arr[i*2]=pos[i];
            arr[i*2+1]=neg[i];
        }
        int index=neg.size()*2;
        for(int i=neg.size();i<pos.size();i++){
            arr[index]=pos[i];
            index++;
        }
    }
    else{
        for(int i=0;i<pos.size();i++){
            arr[i*2]=pos[i];
            arr[i*2+1]=neg[i];
        }
        int index=pos.size()*2;
        for(int i=pos.size();i<neg.size();i++){
            arr[index]=neg[i];
            index++;
        }
    }
    for(int x: arr){
        cout<<x<<" ";
    }
}