#include<iostream>
using namespace std;

// int pivIndex(int arr[], int n){

//     int s = 0;
//     int e = n - 1;

//     int mid = s + (e-s)/2;

//     while(s < e){

//         if(arr[mid] >= arr[0]){
//             s = mid + 1;
//         }
//         else{
//             e = mid;
//         }
//         mid = s + (e-s)/2;
//     }
//     return s;
// }

// int main(){

//     int arr[5] = {8, 10, 17, 1, 3};

//     cout << "Pivot is " << pivIndex(arr, 5) <<endl;
// }


int pivIndex(int arr[], int n){

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;

    while(s<e){
    if(arr[mid] >= arr[0]){
        //left mai move karna 
        s = mid+1;
    }
    else{
        //right mai move karna
        e = mid;
    }
    mid = s + (e-s)/2;
    }
    return s;
}
int main(){

    int arr[5] = {7,9,4,5,6};

    cout<<"the pivot index is " <<pivIndex(arr, 5) <<endl;
}