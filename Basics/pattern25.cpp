#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    //for the space
    int i=1;
    while(i<=n){
        int space=n-i;
        while(space){
            cout<<"  ";
            space--;
        }
        
    //for 1st triangle
        int j=1;
        while(j<=i){
            cout<<j<<" ";
            j++;
        }    

    //for 2nd triangle
        int start=i-1;
        while(start){
            cout<<start<<" ";
            start--;
        }
        cout<<endl;
        i++; 
    }
        }