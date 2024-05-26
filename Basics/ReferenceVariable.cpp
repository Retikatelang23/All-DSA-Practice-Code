#include<iostream>
using namespace std;
void update2(int &n){
    n++;
}

void update1(int n){
    n++;
}

int main(){

    /*
    int i = 7;

    // using the reference variable-> j ko bhi i ko point karna

    int &j = i;

    cout << i << endl;
    i++;
    cout << i << endl;
    // chahe tum j ko change karo ya i ko both are equal equal
    j++;
    cout << j << " " << i << endl;
    */

   int n = 9;

   cout << "before " << n << endl;
   update1(n);
   cout << "after " << n << endl;
   update2(n);
   cout << "reference variable used " << n << endl;
    return 0;
}