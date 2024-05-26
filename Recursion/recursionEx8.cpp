#include<iostream>
#include<vector>
using namespace std;

// check the array is sorted or not

bool checkSorted(vector<int> &arr, int &n, int i){

    // base case
    if(i == n-1){
        return true;
    }

    // processing
    if(arr[i+1] < arr[i]){
        return false;
    }

    // recursive relation
    checkSorted(arr, n, i+1);
}

int main(){

    vector<int> v{10, 20, 30, 40, 60, 50};

    int n = v.size();

    int i = 0;

    bool isSorted = checkSorted(v, n, i);

    if(isSorted){
        cout << "array is sorted" << endl;
    }
    else{
        cout << "array is not sorted" << endl;
    }
}