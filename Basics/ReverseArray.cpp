#include<iostream>
#include<vector>
using namespace std;

// void printArray(int arr[], int n){

//     for(int i = 0; i<n; i++){
//         cout << arr[i] << " " << endl;
//     }
// }

// void reverse(int arr[], int n){

//     int start = 0;
//     int end = n-1;

//     while(start <= end){
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }

// int main(){

//     int arr[3] = {1,2,3};

//     reverse(arr, 3);

//     printArray(arr, 3);
// }

// void reverse(vector<int> arr){

//     int s = 0; 
//     int e = arr.size()-1;

//     while(s<e){
//         swap(arr[s], arr[e]);
//         s++;
//         e--;
//     }
// }

// void printArray(vector<int>arr){

//     for(int i = 0; i<arr.size(); i++){
//         cout << arr[i] << " ";
//     }
// }

int main(){

    int arr[3] = {1,2,3};

    reverse(arr.begin(), arr.end());

    for(int i = 0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    //printArray(arr);
}















