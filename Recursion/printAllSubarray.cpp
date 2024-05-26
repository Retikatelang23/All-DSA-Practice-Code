#include<iostream>
#include<vector>
using namespace std;

void printAllSubarray_util(vector<int> &arr, int start, int end){

    // base case
    if(end == arr.size()){
        return ;
    }

    // processing -> ek case solve karna hai
    for(int i = start; i<=end; i++){
        cout << arr[i] <<" ";
    }
    cout << endl;

    printAllSubarray_util(arr, start, end+1);
}

void printAllSubarray(vector<int>&arr){

    for(int start = 0; start<arr.size(); start++){
        int end = start;
        printAllSubarray_util(arr, start, end);
    }

}

int main(){

    vector<int> arr{1,2,3,4,5};

    printAllSubarray(arr);
    return 0;
}