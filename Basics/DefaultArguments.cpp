#include<iostream>
using namespace std;

/* start = 0 likh kar maine ek default argument pass kiya
    jisase agar maine usko main function mai call anhi bhi kiya to 
    the complier will understands ki kiya print karna hai */
int prit(int arr[], int n, int start = 0){

    for(int i = start; i<n; i++){
        cout << arr[i] << endl; 
    }
}

int main(){

    int arr[3] = {1,2,3};
    int size = 3;
    print(arr, size);

    return 0;
}