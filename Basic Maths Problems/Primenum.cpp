#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n<=1){
        cout<<"Not a Prime Number";
    }
    int isPrime=1;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            isPrime=false;
        }
    }
    if(isPrime==1){
        cout<<"Its a Prime Number";
    }
    else{
        cout<<"Not a Prime Number";
    }
}