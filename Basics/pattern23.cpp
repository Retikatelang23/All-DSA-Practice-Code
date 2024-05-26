#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    int i = 1;
    while(i<=n){
        int space=0;
        while(space<=i-1){
        cout<<" ";
        space++;
        }
        int j = 1;
        while(j<=n-i+1){
            cout<<i+j-1;
            j = j+1;            
    }
    cout<<endl;
    i = i+1; 
    }
}