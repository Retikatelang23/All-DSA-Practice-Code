#include<iostream>
using namespace std;

//function overloading
class A {

    public:
        void sayHello(){
            cout << "hello ritika telang" << endl;
        }

        //function overlaoding
        // void sayHello(string name){
        //     cout << "hello" << name << endl;
        // }

        //possible
        // bas 2 function ek name and use return type same nahi hona chahiye
        // there should be some difference between both the functions
        int sayHello(string name, int n){
            cout << "hello " << endl;
        }
};

class B {

    public:
    int a;
    int b;

    public:
    int add(){
        return a + b;
    }

    void operator+ (B &obj){
        int value1 = this -> a;
        int value2 = obj.a;
        cout << "output " << value1 - value2 << endl;
    }
};

class Animal {

    public:
        void speak(){
            cout << "speaking" << endl;
        }
};

class Dog {

    public:
        void speak(){
            cout << "barking" << endl;
        }
};

int main(){

    Dog obj;
    obj.speak();



/*
    B obj1, obj2;

    obj1.a = 5;
    obj2.a = 8;

    obj1 + obj2;
*/


    // A obj;
    // obj.sayHello();
}