#include <iostream>
using namespace std;
int fib(int n){

    int a = 0;
    int b = 1;
    int nextnumber;

    for(int i = 1; i<=n-2; i++){
        nextnumber = a+b;

        a = b;
        b = nextnumber;
        
    }
    return nextnumber;
}
int main(){
    int n;
    cin >> n;

    fib(n);
    cout << fib(n) <<endl;
    return 0;
}