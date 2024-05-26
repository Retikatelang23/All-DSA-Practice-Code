#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> &arr, int s, int e, int &key){

    // base case
    // case 1 --> key not found
    if(s > e){
        return -1;
    }
    int mid = (s+e)/2;
    // case 2 --> key found
    if(arr[mid] == key){
        return mid;
    }

    // processing --> ek case solve karna + recursive relation
    return (arr[mid] < key) ? binarySearch(arr, mid+1, e, key) : 
    binarySearch(arr, s, mid-1, key); 
}

int main(){

    vector<int> v{10,12,15,17,19,30,60};
    int target = 15;

    int n = v.size();
    int s = 0;
    int e = n-1;
    int ans = binarySearch(v, s, e, target);

    cout << "Answer is: " << ans << endl;
}