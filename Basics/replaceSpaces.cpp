/*you have been given a string 'STR' of words. you need to replace all 
the spaces words with "@40"*/

#include <iostream>
using namespace std;

char replaceSpaces(string a){

    for(int i = 0; i<a.length(); i++){

        if(a[i] == ' '){
            a.push_back('@');
            a.push_back('4');
            a.push_back('0');
        }
        else{
           
        }
    }
}
int main(){

    string s;
    cin >> s;

    cout << replaceSpaces(s) << endl;
}