#include<iostream>
using namespace std;

// bool search(int arr[], int size, int key){

//     for(int i=0; i<size; i++){
//         if(arr[i] == key){
//             return 1;
//         }
//     }
//     return 0;
// }

// int main(){

//     int arr[10] = {2, -6, 7, 10, -22, 1, 12, 22, 2, 13};

//     cout<<"enter the element to search for "<<endl;
//     int key;
//     cin >> key;

//     bool found = search(arr, 10, key);

//     if(found){
//         cout << "key is present "<<endl;
//     }
//     else{
//         cout<< "key is absent " <<endl;
//     }

// }  


bool search(int arr[], int key, int size){

    for(int i = 0; i<size; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}  

int main(){

    int arr[5] = {5, 5, 4, 3, 1};

    cout<<" Enter the element you are searching for " <<endl;
    int key;
    cin >> key;

    bool found = search(arr, key, 5);

    if(found){
        cout<<"key is present" <<endl;
    }
    else{
        cout<<"key is absent" <<endl;
    }


}

