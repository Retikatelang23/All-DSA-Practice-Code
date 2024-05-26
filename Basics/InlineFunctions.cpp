#include<iostream>
using namespace std;

inline int getMax(int& a, int& b){
    return (a<b) ? a : b;
}

int main(){

    int a = 8, b = 4;
    int ans = 0;

    ans = getMax(a,b);
    cout << ans << endl;

    a = a + 2;
    b = b + 4;

    ans = getMax(a,b);
    cout << ans << endl;


    return 0;
}