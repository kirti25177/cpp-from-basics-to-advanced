#include<iostream>
//Floor of squareroot(n)
//maximum integer which on squaring <= number
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int low=0;
    int high=n;
    int ans=1;
    while(low<=high){
        int mid=(low+high)/2;
        if(mid*mid<=n){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    cout<<"Square Number: "<<ans;
}