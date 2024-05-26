#include<iostream>
using namespace std;

class Animal {

    public:
        string bread;
        int age;
    
    public:
        void bark(){
            cout << "barking" << endl;
        }

};

class Dog: public Animal {

    public:
        void name(){
            cout << "my name is jojo! " << endl;
        }

};

class Child: public Dog {

};

int main(){

    Child kitti;
    kitti.name();
    kitti.bark();
    cout << kitti.bread << endl;
}