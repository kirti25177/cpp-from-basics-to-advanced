#include<iostream>
using namespace std;
int numbers(int n){
    if(n==0){
        return 0;
    }
    else{
        numbers(n-1);
        cout<<n<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Numbers from 1 to "<<n<<" are: "<<endl;
    numbers(n);
}