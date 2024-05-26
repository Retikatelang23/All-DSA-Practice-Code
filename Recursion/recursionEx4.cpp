#include<iostream>
using namespace std;


// find number of ways to reach the nth stair

int nthStair(int n){

    // base case
    if(n == 0 || n == 1)
        return 1;

    // recursive relation
    int ans = nthStair(n-1) + nthStair(n-2);
    return ans;   
}

int main(){

    int n;
    cout << " Enter the nth stair where to reach: " << endl;
    cin >> n;

    int ans = nthStair(n);

    cout << " No. of ways to reach the stair are: " << ans << endl;
}