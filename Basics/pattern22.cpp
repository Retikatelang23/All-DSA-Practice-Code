#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    int i = 1;

    while(i<=n){
        int space = n;
        while(space<=n-i+3){
            cout<<" ";
            space = space+1;
        }
        int j=1;
        while(j<=i){
            cout<<i;
            j = j+1;
        }
        cout<<endl;
        i = i+1;
    }
}