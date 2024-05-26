#include<iostream>
using namespace std;

bool isPossible(vector<int> arr, int n, int m, int mid){

    int studentCount = 1;
    int pagesum = 0;

    for(int i = 0; i<n; i++){

        if(pagesum + arr[i] <= mid){
           pagesum += arr[i];
        }
        else{
            studentCount++;
            if(pagesum + arr[i] > m || arr[i] > mid){
                return false;
            }
            pagesum = arr[i];
        }
    }
    return true;
}