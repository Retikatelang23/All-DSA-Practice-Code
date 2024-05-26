#include <iostream>
using namespace std;

// int FirstOcc(int arr[], int n, int key){

//     int s = 0, e = n-1;
//     int ans = -1;
//     int mid = s + (e - s)/2;

//     while(s <= e){

//         if(key == arr[mid]){
//             ans = mid;
//             e = mid - 1;
//         }
//         else if(key < arr[mid]){
//             e = mid - 1;
//         }
//         else if(key > arr[mid]){
//             s = mid + 1;
//         }
//         mid = s + (e - s)/2;
//     }
//     return ans;
// }

// int LastOcc(int arr[], int n, int key){

//     int s = 0, e = n-1;
//     int mid = s + (e - s)/2;
//     int ans = -1;

//     while(s <= e){

//         if(key == arr[mid]){
//             ans = mid;
//             s = mid + 1;
//         }
//         else if(key < arr[mid]){
//             e = mid - 1;
//         }
//         else if(key > arr[mid]){
//             s = mid + 1;
//         }
//         mid = s + (e - s)/2;
//     }
//     return ans;
// }

// int main(){

//     int even[5] = {4, 3, 6, 6, 7};

//     cout << "First occurence of 3 is at Index " << FirstOcc(even, 5, 6) <<endl;
//     cout << "Last occurence of 3 is at Index " << LastOcc(even, 5, 6) <<endl;


// }

int firstOcc(int arr[], int n, int key){
    int s = 0, e = n-1;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s<=e){
    
    if(key == arr[mid]){
        ans = mid;
        e = mid - 1;
    }
    else if(key < arr[mid]){
        e = mid - 1;
    }
    else if(key > arr[mid]){
        s = mid + 1;
    }
    mid = s + (e-s)/2;
    }
    return ans;
}


int lastOcc(int arr[], int n, int key){

    int s = 0, e = n-1;
    int ans = -1;
    int mid = s + (e - s)/2;

    while(s<=e){

        if(key == arr[mid]){
            ans = mid;
            s = mid+1;
        }
        else if(key < arr[mid]){
            e = mid-1;
        }
        else if(key > arr[mid]){
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){

    int arr[6] = {1,1,2,2,2,3};

    cout<<"first occurence of 2 is " << firstOcc(arr, 6, 2) <<endl;
    cout<<"last occurence of 2 is " <<lastOcc(arr, 6, 2) <<endl;

}