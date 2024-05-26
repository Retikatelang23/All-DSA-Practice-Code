#include<iostream>
#include<array>
using namespace std;

int main(){

    int basic[3] = {1,2,3};

    //initializing array using stl
    array<int, 4> a = {1,2,3,4};

    // to get the size of the array 
    int size = a.size();

    // to print the stl array
    for(int i = 0; i<size; i++){
        cout<<a[i]<<endl;
    }

    // to print the second index element of an array
    cout<<"Element at 2nd index -> "<<a.at(2)<<endl;

    //to check whether the array is empty or not
    cout<<"Empty or not-> "<<a.empty()<<endl;

    //to find the first element of an array
    cout<<"First Element-> "<<a.front()<<endl;

    //to find the last element of an array
    cout<<"Last Element-> "<<a.back()<<endl;

}