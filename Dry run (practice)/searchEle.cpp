#include<iostream>
using namespace std;
//insertion sort

void print(int arr[], int n){

    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
}

void insertionSort(int arr[], int n){

    int temp, j;

    for(int i = 1; i<n; i++){
        temp = arr[i];
        j = i;

        while(j > 0 && arr[j-1] > temp){
            arr[j] = arr[j-1];
            j--;
        }

        arr[j] = temp;
    }
}

int main(){

    int arr[5] = {4,1,3,9,5};

    insertionSort(arr, 5);

    print(arr, 5);
}