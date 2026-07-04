#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int c=0;
    while(n!=0){
        n=n/10;
        c++;
    }
    //Time complexity of this code is O(log10(n)) and space complexity is O(1) which is not optimal.
    //We can also solve this problem using optimal approach
    //count=log10(n)+1; This uses time complexity of O(1) and space complexity of O(1) which is optimal.
    cout<<"Number of digits: "<<c<<endl;
}