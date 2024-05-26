#include<iostream>
using namespace std;

class Animal {

    public:
        int age;
        int height;

    public:
        void speak(){
            cout << "speaking" << endl;
        }
};

class Dog: public Animal {
    
};

int main(){

    Dog jojo;
    jojo.speak();
    cout << jojo.age << endl;
}