#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int r=0;
    while(n!=0){
        int temp=n%10;
        r=r*10+temp;
        n=n/10;
    }
    cout<<"Reverse of number: "<<r;
}