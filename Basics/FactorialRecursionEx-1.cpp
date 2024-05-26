#include<iostream>
using namespace std;

int factorial(int n){

    // base case
    if(n == 0){
        return 1;
    }

    /*in place of
        chotti = factorial(n-1)
        badi = n * chotti
    we wrote the below line --> jiski vajah se code kafi chota ho gaya
    */   
    return n * factorial(n-1);
}

int main(){

    int n;
    cin >> n;

    int ans = factorial(n);

    cout << ans << endl;

    return 0;
}