#include<iostream>
using namespace std;

// if differnt classes have same name then use scope resolution operator

class Animal {

    public:
        string bread;
        int age;
    
    public:
        void name(){
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
    //inheritance ambiguity
    kitti.Dog::name();
    cout << kitti.bread << endl;
}