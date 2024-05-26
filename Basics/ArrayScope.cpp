
#include<iostream>
using namespace std;

int update(int arr[], int n){

    cout<<endl<<"Inside the function"<<endl;

    //updating array's second element
    arr[1] = 120; 

     for(int i=0; i<3; i++){
        cout<<arr[i]<<" "<<endl;
    }

    cout<<endl<<"Going back to the main function"<<endl;

}

int main(){

    int arr[3] =  {1, 4, 5};

    update(arr, 3);

    //printing the function
    for(int i=0; i<3; i++){
        cout<<arr[i]<<" "<<endl;
    }

}