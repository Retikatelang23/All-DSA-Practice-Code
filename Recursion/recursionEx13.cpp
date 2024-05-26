#include<iostream>
#include<vector>
#include<climits>
using namespace std;

void MaxSum(vector<int>&arr, int i, int sum, int maxi){

    //base case
    if(i >= arr.size()){
        // maxi ko update karna hai
        maxi = max(sum, maxi);
        return;
    }

    // include
    MaxSum(arr, i+2, sum+arr[i], maxi);

    // exclude
    MaxSum(arr, i+1, sum, maxi);
}

int main(){

    vector<int> arr{2,1,4,9};
    int sum = 0;
    int maxi = INT_MIN;

    int i = 0;
    MaxSum(arr, i, sum, maxi);

    cout << "answer is: " << maxi << endl;

}