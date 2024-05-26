#include<iostream>
using namespace std;

char toLowercase(char ch){

    if(ch >= 'a' && ch <= 'b'){
        return ch;
    }
    else{

        // to convert upper case into lower case
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char a[], int n){
    int s = 0;
    int e = n-1;

    while(s<=e){
        if(a[s] != a[e]){
            return 0;
        }
       else{
           s++;
           e--;
        }    
    }
    return 1;
}   

int getLength(char name[]){

    int count = 0;
    for(int i = 0; name[i] = '\0'; i++){
        count++;
    }
    return count;
}

int main(){

    char name[20];

    int len = getLength(name);
    cout << "palindrome or not " << checkPalindrome(name, len) <<endl;

    cout << "character is " << toLowercase('b') << endl;
    cout << "character is " << toLowercase('B') << endl;


    
}