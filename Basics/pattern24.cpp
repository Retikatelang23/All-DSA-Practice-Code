#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int count = 1;
    int i = 1;
    while(i<=n){
        int space = n;
        while(space<=n-i+5){
            cout<<"  ";
            space++;
        }
        int j=1;
        while(j<=i){
            cout<<count++<<" ";
            j = j+1;  
        }
        cout<<endl;
        i++;
    }
    
    }