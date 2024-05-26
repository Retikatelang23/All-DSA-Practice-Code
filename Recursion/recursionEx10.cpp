#include<iostream>
using namespace std;

// print all the substrings of a given string

void printSubSequence(string str, string output, int i){

    // base case
    if(i >= str.length()){
        cout << output << endl;
        return;
    }

    // exclude
    printSubSequence(str, output, i+1);

    // include
    output.push_back(str[i]);
    printSubSequence(str, output, i+1);
}

int main(){

    string str = "ritika";
    string output = "";

    int i = 0;
    printSubSequence(str, output, i);

    return 0;
} 