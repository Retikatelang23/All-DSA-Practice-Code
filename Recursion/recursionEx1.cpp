#include<iostream>
using namespace std;

int factorial(int n){

    // base case
    if(n == 1)
        return 1;
        
    int ans = n * factorial(n-1);
    return ans;
}

int main(){

    int n;
    cout << "Enter the number " << endl;
    cin >> n;

    int ans = factorial(n);

    cout << "Answer is: " << ans << endl;
}