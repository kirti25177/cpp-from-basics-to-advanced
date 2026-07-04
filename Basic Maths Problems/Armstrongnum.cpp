#include<iostream>
using namespace std;
int power(int b,int e){
    int p=1;
    for(int i=0;i<e;i++){
        p*=b;
    }
    return p;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int temp=n;
    int c=0;
    while(temp!=0){
        c++;
        temp=temp/10;
    }
    temp=n;
    int s=0;
    while(temp!=0){
        int l=temp%10;
        s+=power(l,c);
        temp=temp/10;
    }
    cout<<n<<endl;
    if(n==s){
        cout<<"Armstrong Number";
    }
    else{
        cout<<"Not Armstrong Number";
    }
}