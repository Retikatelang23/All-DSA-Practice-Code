#include<iostream>
using namespace std;

//code flow
//1. input  2. cout(print karne ke liye)    3. recursive relation

void print(int n){

    //base case
    if(n == 0){
        return ;
    }

    /* tail recursion
    cout << n << endl;

    //Recursive relation
    print(n-1);
    */

   //head recursion
   //Recursive relation
    print(n-1);

   cout << n << endl;
   
}

int main(){

    int n;
    cin >> n;

    print(n);

    return 0;
}