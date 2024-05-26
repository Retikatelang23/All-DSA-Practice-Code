#include<iostream>
#include<climits>
using namespace std;

bool isPresent(int arr[][4], int target, int n, int m){
    for(int i = 0 ; i<4; i++){
        for(int j = 0; j<4; j++){
            if(arr[i][j] == target) {
                return 1;
            }
        }
    }
    return 0;
}

//to print row wise sum 
void printSum(int arr[][4], int n, int m){

    cout << " Printing sum -> " << endl;
    for(int i = 0 ; i<4; i++){
        int sum = 0;
            for(int j = 0; j<4; j++){
                sum += arr[i][j];
            }
            cout << sum << " ";
        }  
}

int largestRowSum(int arr[][4], int n, int m){

    int maxi = INT_MIN;
    int rowIndex = -1;
    int i = 0;

    for(; i<4; i++){
        int sum = 0;
            for(int j = 0; j<4; j++){
                sum += arr[i][j];
            }

            if(sum > maxi){
                maxi = sum;
                rowIndex = i;
            }
        }
        cout << " the maximum sum is " << maxi << endl;
        return rowIndex;  
}
int main(){

    int arr[4][4];

    cout<<" Enter the elements of the array "<< endl;
    //taking input -> row wise input
    for(int i = 0 ; i<4; i++){
        for(int j = 0; j<4; j++){
            cin >> arr[i][j];
        }
    }

    //taking input ->column wise
    // for(int i = 0; i<4; i++){
    //     for(int j = 0; j<4; j++){
    //         cin >> arr[j][i];
    //     }
    // }
    
    cout<<" Printing the array "<<endl;
    //printing the array
    for(int i = 0; i<4; i++){
        for(int j = 0; j<4; j++){
            cout << arr[i][j] <<" ";
        }
        cout << endl;
    }
/*
    cout << " Enter the element to search " << endl;
    int target;
    cin >> target;

    if(isPresent(arr, target, 3, 4)){
        cout << " Element found " << endl;
    }
    else{
        cout << " Element not found " << endl;
    }

    printSum(arr, 4, 4);
*/

    int ansIndex = largestRowSum(arr, 4, 4);
    cout << " max row at index " << ansIndex << endl;
    return 0;
}
