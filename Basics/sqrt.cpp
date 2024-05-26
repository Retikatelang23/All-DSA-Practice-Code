#include<iostream>
#include<math.h>
using namespace std;

int sqrt(int arr[], int n){

    int s = 0, e = n;
    int mid = s +(e-s)/2;
    int ans = -1;

    while(s<=e){

        int square = mid*mid;
        
    if(square == n){
        return mid;
    }
    else if(square < n){
        ans = mid;
        s = mid + 1;
    }
    else{
        e = mid - 1;
    }
    mid = s +(e-s)/2;
    }
    return ans;
}
int main(){

    int arr[36];

    cout<<"the square root of the given element is " <<sqrt(arr, 36)<<endl;
}