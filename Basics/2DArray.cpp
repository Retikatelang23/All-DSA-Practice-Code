#include<iostream>
using namespace std;

int main(){

    /*
    // for same number of rows and columns
    int n;
    cin >> n;
    */

    // for different number of rows and columns
    int row;
    cin >> row;
    int col;
    cin >> col;

    // creating a 2D array
    int **arr = new int *[row];
    for(int i = 0; i<row; i++){
        arr[i] = new int[col];
    }
    // creation of 2D array is done

    // taking input from the user
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cin >> arr[i][j];
        }
    }

    // printing the array
    cout << endl;
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout << arr[i][j] << " ";
        } cout << endl;
    }

    //releasing the memory
    for(int i = 0; i<row; i++){
        delete []arr[i];
    }

    delete []arr;


    return 0;
}