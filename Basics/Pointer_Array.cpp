#include<iostream>
using namespace std;

int main(){

    int arr[10] = {2, 5, 8};


    // to find the address
    // cout << "the address of first memory block is " << arr << endl;

    // // to find the address
    // cout << "the address of first memory block is " << &arr[0] << endl;
    
    // to get the value at the specific index
    // cout << "1st " << arr[0] << endl;
    
    // // value at first location
    // cout << "2nd " << *arr << endl;
    
    // // value ko plus karna
    // cout << "3rd " << *arr + 1 << endl;
    
    // // next location vali value 
    // cout << "4th " << *(arr + 1) << endl;

    // // value + 1
    // cout << "5th " << (*arr) + 1 << endl;
    // // same
    // cout << "6th " << *(arr) + 1 << endl;

    /* value add nahi karna hai--> 0th index par hai to vaha se 
     2nd index par jana hai because its + 2--> agar + 1 hota to 
     first index par jate */ 
    /* 
    cout << "7th " << *(arr + 2) << endl;

    int i = 2;
    cout << i[arr] << endl;
    */

   
//    int temp[10];
//    cout <<"1st: "<< sizeof(temp) << endl;
//    cout <<"2rd: "<< sizeof(*temp) << endl;
//    cout <<"3th: "<< sizeof(&temp) << endl;

//    int *ptr = &temp[0];
//    cout <<"5th: "<< sizeof(ptr) << endl;
//    cout <<"6th: "<< sizeof(*ptr) << endl;
//    cout <<"7th: "<< sizeof(&ptr) << endl;
   

//    int a[20] = {2,4,7,9};
//    cout << "1st: "<< &a << endl;   
//    cout << "2nd: "<< a << endl;
//    cout << "3rd: "<< &a[0] << endl;

//    int *ptr = &a[0];
//    cout << "4th: "<< &ptr << endl;   
//    cout << "5th: "<< ptr << endl;
//    cout << "6th: "<< *ptr << endl;
    
    return 0;
}   