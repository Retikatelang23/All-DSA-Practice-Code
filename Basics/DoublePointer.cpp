#include <iostream>
using namespace std;

void update(int **p2){

    //p2 = p2 + 1;
    // kuch change hoga ??
    // ==> no change --> value jaise ki vaise prit hogi

    //*p2 = *p2 + 1;
    // kuch change hoga ??
    // ==> change hoga --> 4 byte ki memory hai to 4 aage badega --> 9-->13

    **p2  = **p2 + 1;
    // kuch change hoga ??
    // ==> i ki value change hogi --> update hogi 
}

int main(){

    int i = 9; 
    int *p = &i;

    // cout <<"first: "<< p << endl;

    int **p2 = &p;

    // cout <<"second: "<< p2 << endl;
    // cout <<"third: "<< *p2 << endl;

    // to print the value of i--> three ways to do so
    // cout << i << endl;
    // cout << *p << endl;
    // cout << **p2 << endl;

    // to print the value at p--> three ways to do so
    // cout << &i << endl;
    // cout << p << endl;
    // cout << *p2 << endl;

    // to print the value in p2 --> two ways to do so
    // cout << p2 << endl;
    // cout << &p << endl;


    cout << endl;
    cout << "before: " << i << endl;
    cout << "before: " << p << endl;
    cout << "before: " << p2 << endl;
    update(p2);
    cout << endl;
    cout << "after: " << i << endl;
    cout << "after: " << p << endl;
    cout << "after: " << p2 << endl;

    return 0;
}