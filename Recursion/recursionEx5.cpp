#include<iostream>
#include<climits>
using namespace std;
 
// print the array using recursion

// void print(int arr[], int n, int i, int target){

//     //base case
//     if(i >= n)
//         return;

//     //processing -> ek case solve karna baki recursion sambhal lega
//     cout << arr[i] << " ";

//     // recursive relation
//     print(arr, n, i+1);

     

// }

// void print(int arr[], int n, int i){

//     //base case
//     if(i >= n)
//         return;

//     //processing -> ek case solve karna baki recursion sambhal lega
//     cout << arr[i] << " ";

//     // recursive relation
//     // i doing post increament
//     // i+1 == ++1 this both are same
//     print(arr, n, ++i);

// }

// int main(){

//     int arr[] = {1, 2, 5, 7, 3, 8, 14};
//     int n = 7;
//     int i = 0; //index

//     // function call
//     print(arr, n, i);
// }




// find maximum element in an array


// void findMax(int arr[], int n, int i, int& maxi){

//     //base case
//     if(i >= n)
//         return;

//     // processing -> 1st case ke liye
//     if(arr[i] > maxi){
//         maxi = arr[i];
//     }
    
//     // recursive relation
//     findMax(arr, n, i+1, maxi);

     

// }

// int main(){

//     int arr[] = {1, 2, 5, 7, 3, 8, 14};
//     int n = 7;

//     int maxi = INT_MIN;


//     int i = 0; //index

//     // function call
//     findMax(arr, n, i, maxi);
//     cout << " Maximum element is: " <<  maxi << endl;;
// }



// to find minimum element of an array

void findMin(int arr[], int n, int i, int& mini){

    // base case
    if(i >= n)
        return;

    // processing -> 1st case solve karna
    mini = min(arr[i], mini);

    // recursive relation
    findMin(arr, n, i+1, mini);        
}

int main(){

    int arr[] = {1, 2, 5, 7, 3, 8, 14};
    int n = 7;

    int mini = INT_MAX;

    int i = 0;

    findMin(arr, n, i, mini);
    cout << "Minimum element is: " << mini << endl;
}