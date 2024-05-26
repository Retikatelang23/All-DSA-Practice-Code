#include<iostream>
using namespace std;

// print the given number

void printDigits(int n){

    //base case
    if(n == 0){
        return;
    }

    // recursive relation
    printDigits(n / 10);

    //processing
    int digit = n % 10;
    cout << digit << " ";
}

int main(){

    int n = 0647;
    cout << n;

    printDigits(n);

}