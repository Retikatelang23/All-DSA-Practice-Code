#include<iostream>
using namespace std;

int main(){
    
    // 1st que -> 0
    // int first = 8;
    // int second  = 18;
    // int *ptr = &second;
    // *ptr = 9;
    // cout << first <<" " << second << endl;

    // 2nd que -> 0
    // int first = 6;
    // int *ptr = &first;
    // int *q = ptr;
    // (*q)++;
    // cout << first << endl;

    // 3rd que -> 0
    // int first = 8;
    // int *p = &first;
    // cout << (*p)++ << " ";
    // cout << first << endl;

    // 4th que -> 0
    // int *p = 0;
    // int first = 110;
    // *p = first;
    // cout << *p << endl;

    // 5th que -> 0
    // int first = 8;
    // int second = 11;
    // int *third = &second;
    // first = *third;
    // *third = *third + 2;
    // cout << first << " " << second << endl;

    // 6th que -> 1
    // float f = 12.5;
    // float p = 21.5;
    // float *ptr = &f;
    // (*ptr)++;
    // *ptr = p;
    // cout << *ptr << " " << f << " " << p << endl;

    // 7th que -> 0
    // int arr[5];
    // int *ptr;
    // cout << sizeof(arr) << " " << sizeof(ptr) << endl;

    // 8th que -> 1
    // int arr[] = {11, 21, 13, 14};
    // cout << *(arr) << " " << *(arr+1) << endl;

    // 9th que -> 0
    // int arr[6] = {11, 12, 31};
    // cout << arr << " " << &arr << endl;

    // 10th que -> 0
    // int arr[6] = {11, 21, 13};
    // cout << (arr+1) << endl;

    // 11th que -> 0
    // int arr[6] = {11, 21, 31};
    // int *p = arr;
    // cout << p[2] << endl;

    // 12th que -> 1
    // int arr[] = {11, 12, 13, 14, 15};
    // cout << *(arr) << " " << *(arr + 3);

    // 13th que -> 0
    // int arr[] = {11, 21, 31, 41};
    // int *ptr = arr++;
    // cout << *ptr << endl;

    // 14th que -> 0
    // char ch = 'a';
    // char *ptr = &ch;
    // ch++;
    // cout << *ptr << endl;

    // 15th que -> 1
    // char arr[] = "abcde";
    // char *p = &arr[0];
    // cout << p << endl;

    // 16th que -> 1
    // char arr[] = "abcde";
    // char *p = &arr[0];
    // p++;
    // cout << p << endl;

    // 17th que -> 1
    // char str[] = "retika";
    // char *p = str;
    // cout << str[0] << " " << p[0]<< endl;

    // 18th que -> 1
    // void update(int *p){
    //     *p = (*p) + 2;
    // }

    // int main(){
    //     int i = 10;
    //     update(&i);
    //     cout << i << endl;
    // }

    // 19th que -> 1
    // int first = 110;
    // int *p = &first;
    // int **q = &p;
    // int second = (**q)++ + 9;
    // cout << first << " " << second << endl;
    

    // 20th que ->
    // int first = 100;
    // int *p = &first;
    // int **q = &p;
    // int second = ++(**q);
    // int *r = *q;
    // ++(*r);
    // cout << first << " " << second << endl;

    // 21st que -> 1
    // void increment(int **p){
    //     ++(**p);
    // }

    // int main(){
    //     int num = 110;
    //     int *ptr = &num;
    //     increment(&ptr);
    //     cout << num << endl;
    // }
    
}