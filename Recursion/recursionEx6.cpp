#include<iostream>
#include<vector>
using namespace std;

// to check whether the given character is present in the string or not 

// bool checkKey(string& str, int& n, int i, char& key){

//     // base case
//     if(i >= n){
//         // key not found
//         return false;
//     }

//     // processing --> 1st case solve karna baki recursion sambhal lega
//     if(str[i] == key){
//         return true;
//     }

//     // recursive relation
//     return checkKey(str, n, i+1, key);;
// }

// int main(){

//     string str = "ritikatelang";
//     int n = str.length();

//     char key = 'm';

//     int i = 0; // index

//     bool ans = checkKey(str, n, i, key);

//     cout << " answer is: " << ans << endl;
    
// }



// to check whether the given character is present in the string or not 
// index return karna hai ki found hua to koinsi index par found hua

// void checkKey(string& str, int i, int& n, char& key){

//     // base case
//     if(i >= n){
//         return;
//     }

//     // processing
//     if(str[i] == key){
//         cout << "Found at: " << i << endl;  
//     }

//     // recursive relation
//     return checkKey(str, i+1, n, key);
// }

// int main(){

//     string str = "ritikatelang";
//     int n = str.length();

//     char key = 't';

//     int i = 0;

//     checkKey(str, i, n, key);

//     return 0;
// }


// to check whether the given character is present in the string or not 
// ans naam ke vctor mai store karke usko return karna hai

void checkKey(string& str, int i, int& n, char& key, vector<int>& ans){

    // base case
    if(i >= n){
        return;
    }

    // processing
    if(str[i] == key){
        ans.push_back(i);  
    }

    // recursive relation
    return checkKey(str, i+1, n, key, ans);
}

int main(){

    string str = "ritikatelang";
    int n = str.length();

    char key = 't';

    int i = 0;
    vector<int> ans;

    checkKey(str, i, n, key, ans);
    
    cout << " printing ans" << endl;

    for(auto val: ans){
        cout << val << " ";
    }
    cout << endl;

    return 0;
}