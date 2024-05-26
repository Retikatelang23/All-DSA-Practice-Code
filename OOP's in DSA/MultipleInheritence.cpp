#include<iostream>
using namespace std;

class Animal {

    public:
        int age;
        int height;

    public:
        void speak(){
            cout << "speaking " << endl;
        }    
};

class Dog {

    public:
        void bread(){
            cout << "i am a shitzu " << endl;
        }
};

class Hybrid: public Dog, public Animal {

    public:
        void name(){
            cout << "my name is jojo" << endl;
        }      
};

int main(){

    Hybrid jojo;
    jojo.bread();
    jojo.speak();
    cout << jojo.age << endl;
    cout << jojo.height << endl;
    jojo.name();
}