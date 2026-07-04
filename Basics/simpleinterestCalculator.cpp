#include<iostream>
using namespace std;
int main(){
    int p,r,t;
    cout<<"Enter Principal: ";
    cin>>p;
    cout<<"Enter Rate: ";
    cin>>r;
    cout<<"Enter Time: ";
    cin>>t;
    int i=(p*r*t)/100;
    cout<<"Simple Interest is: "<<i;
    return 0;
}