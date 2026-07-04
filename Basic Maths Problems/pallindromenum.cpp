#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int num=n;
    int r=0;
    while(n!=0){
        int temp=n%10;
        r=r*10+temp;
        n=n/10;
    }
    cout<<"Reverse of Number: "<<r<<endl;
    if(num==r){
        cout<<"Pallindrome Number";
    }
    else{
        cout<<"Not Pallindrome Number";
    }
}