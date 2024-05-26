#include<iostream>
using namespace std;

 void printArray(int arr[], int n){
     for(int i = 0; i<n; i++){
         cout<<arr[i]<<" ";
     }cout<<endl;
 }

 void swapAlternate(int arr[], int size){

    for(int i = 0; i<size; i+=2){
        if(i+1 < size){
            swap(arr[i], arr[i+1]);
        }
    }
}

int main(){

    int even[7] = {5, 7, 4, 3, 2, 6, 8};
    int odd[5] = {9, 34, 21, 45, 7};

    swapAlternate(even, 7);
    printArray(even, 7);

    cout<<endl;

    swapAlternate(odd, 5);
    printArray(odd, 5);
}


// int printArray(int arr[], int size){

//     for(int i = 0; i<size; i++){
//         cout << arr[i] <<" " << endl;
//     }
// }

// int swapAlternate(int arr[], int size){

//     for(int i = 0; i<size; i+=2){
//         if(i+1 < size){
//             swap(arr[i], arr[i+1]);
//         }
//     }
// }

// int main(){

//     int even[6] = {1,4,7,3,8,3};
//     int odd[5] = {5,4,8,9,1};

//     swapAlternate(even, 6);
//     printArray(even, 6);

//     cout<<endl;

//     swapAlternate(odd, 5);
//     printArray(odd, 5);

// }