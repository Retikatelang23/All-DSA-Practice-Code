#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    bool isPrime=1;
    
    for(int i=2; i<n; i++){
        if(n%i==0){
            //cout<<"not a prime number"<<endl;
            isPrime=0;
            break;
        }
    }
    
    if(isPrime==0){
        cout<<"is not a prime number"<<endl;
    }
    else{
        cout<<"is a prime number"<<endl;
    }

    
    }