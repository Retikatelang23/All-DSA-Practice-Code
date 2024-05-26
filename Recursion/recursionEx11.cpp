#include<iostream>
#include<vector>
#include<climits>
using namespace std;

// print all the substrings whose sum is equal to target

int solve(vector<int> &arr, int target){

    // base case
    if(target == 0){
        return 0;
    }
    if(target < 0){
        return INT_MAX;
    }

    // processing --> 1st case solve karna 
    int mini = INT_MAX;
    /* aapn ne dekha ki target banane ke liye array mai jitne bhi 
    un sabka use ho raha hai for ex-> is case mai 2 elements hai 
    array mai i.e., 1 and 2 to har element mai se aapn 1 and 2 ko
    minus kar rahe hai inshot aapn array ko trsverse kar rahe hai
    using for loop */
    for(int i = 0; i<arr.size(); i++){
        int ans = solve(arr, target - arr[i]);
        if(ans != INT_MAX)
            mini = min(mini, ans+1);
    }

    return mini;
}

int main(){

    vector<int> arr{1,2,3};
    int target = 7;

    int ans = solve(arr, target);   

    cout <<" answer is: " << ans << endl;

}