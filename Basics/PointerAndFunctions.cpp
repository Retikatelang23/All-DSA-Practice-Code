#include <iostream>
using namespace std;

void print(int *p){

    // address
    cout << p << endl;
    // value
    cout << *p << endl;

}

void update(int *p){

    // ***** is not applicable in the case of address **********
    p = p + 1;
    cout << "inside " << p << endl;

    //******** is applicable in the case of value *******
    // *p = *p + 1;


}

int getSum(int *arr, int n){

    cout << sizeof(arr) << endl;

    int sum = 0;
    for(int i = 0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){

/*
    int value = 9;
    int *p = &value;

    //print(p);

    // ***** is not applicable in the case of address **********
    // cout << "before " << p << endl;
    // update(p);
    // cout << "after " << p << endl;

    //******** is applicable in the case of value *******
    cout << "before " << *p << endl;
    update(p);
    cout << "after " << *p << endl;
*/    

    int arr[4] = {3,5,4,2};

    cout << " the sum is " << getSum(arr, 4) << endl;

    return 0;
}