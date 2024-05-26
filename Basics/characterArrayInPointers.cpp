#include<iostream>
using namespace std;

int main(){

    /*
    int arr[4] = {1,5,6,8};
    char ch[6] = "abcde";

    cout << arr << endl;

    cout << ch << endl;

    char *c = &ch[0];
    // prints entire string 
    cout << c << endl;
    */

    /* agar null character nahi mila to vo peheli valu to print karega hi
     but use sath sath as meory 4 byte ki hoti hai to usko bharne ke liye
     kuch bhi garbage value print karega */
    char temp = 'z';
    char *p = &temp;
    cout << p << endl;

    return 0;
}