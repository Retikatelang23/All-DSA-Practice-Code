#include<iostream>
using namespace std;

class A {

    public:
        void fun1(){
            cout <<"inside fun1" << endl;
        }
};

class B: public A {

    public:
        void fun2(){
            cout <<"inside fun2" << endl;
        }
};

class C: public A {

    public:
        void fun3(){
            cout <<"inside fun3" << endl;
        }
};

int main(){

    C obj1;
    obj1.fun1();
    obj1.fun3();

    B obj2;
    obj2.fun1();
    obj2.fun2();

    A obj3;
    obj3.fun1();
    
}