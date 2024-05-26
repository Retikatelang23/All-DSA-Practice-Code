#include<iostream>
using namespace std;

//this code was for traversing from left to right 

/*void lastOccLTR(string &str, char target, int i, int &ans){

    // base case
    if(i >= str.size()){
        return;
    }

    // processing -> ek case solve karna hai 
    if(str[i] == target){
        ans = i;
    }

    // recursive relation
    lastOccLTR(str, target, i+1, ans);
}

int main(){

    string str;
    cout << "Enter the string: " << endl;
    cin >> str;

    char target;
    cout << "Enter the character you want to search for: " << endl;
    cin >> target;

    int i = 0;
    int ans = -1;
    lastOccLTR(str, target, i, ans);

    cout << ans << endl;
} */


// this code is for traversing from right to left

void lastOccRTL(string &str, char target, int i, int &ans){

    // base case
    if(i < 0){
        return;
    }

    // processing -> ek case solve karna hai
    if(str[i] == target){
        ans = i;
        return;
    }

    // recursive relation
    lastOccRTL(str, target, i-1, ans);
}

int main(){

    string str;
    cout <<" enter the string: ";
    cin >> str;

    char target;
    cout <<"enter the charcter you want to search for: ";
    cin >> target;

    int i = 0;
    int ans = -1;

    lastOccRTL(str, target, str.size()-1, ans);
    cout << ans << endl;
}