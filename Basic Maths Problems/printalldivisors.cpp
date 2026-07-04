#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"All divisors of "<<n<<" are: ";
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        if(i!=n/i){
                cout<<n/i<<" ";
            }
            //This condition is used to avoid printing the square root twice in case of perfect squares. For example, if n=36, then 6*6=36, so we only want to print 6 once as a divisor.
        }
    }
}