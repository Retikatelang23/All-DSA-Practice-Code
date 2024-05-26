#include<iostream>
using namespace std;

bool isPalindrome(string &str, int start, int end){

    // base case
    if(start >= end ){
        return true;
    }

    // processing-> ek case solve karenge
    if(str[start] != str[end]){
        return false;
    }

    // reursive relation
    return isPalindrome(str, start+1, end-1);
}

int main(){

    string str;
    cin >> str;

    int start = 0;
    int end = str.size()-1;

    cout << isPalindrome(str, start, end);
}