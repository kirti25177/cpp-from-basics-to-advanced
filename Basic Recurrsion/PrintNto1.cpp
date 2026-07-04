#include<iostream>
using namespace std;
int numbers(int n){
    if(n==0){
        return 0;
    }
    else{
        cout<<n<<" ";
        numbers(n-1);
    }
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Numbers from "<<n<<" to "<<"1"<<" are: ";
    numbers(n);
}