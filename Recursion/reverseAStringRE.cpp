#include<iostream>
using namespace std;

void reverseString(string &str, int start, int end){

    //base case
    if(start >= end){
        return;
    }

    // processing-> ek case solve karna hai
    swap(str[start], str[end]);
    
    // recursive relation
    reverseString(str, start+1, end-1);
}

int main(){

    string str;
    cout << "enter the string you want to reverse: ";
    cin >> str;

    int start = 0;
    int end = str.size()-1;

    reverseString(str, start, end);

    cout << " Answer is: " << str << endl;

    
}