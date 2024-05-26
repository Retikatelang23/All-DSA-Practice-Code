#include<iostream>
using namespace std;

//creation of class
class Hero {

    private:
        char health;

    public: 

    Hero(){
        cout <<"constreuctor called" << endl;
    }

    // parameterized constructor
    Hero(int health){
        cout << "this ->" << this << endl;
        this->health = health;
    }

    void print(){
        cout <<"health is:" << this->health << endl;
    }

    int getHealth(){
        return health;
    }    

    void setHealth(int h){
        health = h;
    }

};

int main(){

    Hero ritika(70);
    ritika.print();

    //copy constructor
    Hero mayu(ritika);
    mayu.print();












/*
    // two types of allocation
    // static allocation
    Hero ritika;
    cout << "address of ritika:" << &ritika << endl;
    ritika.getHealth();

    // cout << "health is: " << ritika.getHealth() << endl;

    // // dynamic allocation
    // Hero *s = new Hero;

    // s->setHealth(45);

    // cout << "health is: " << (*s).getHealth() << endl;
    // // can also be written as
    // cout << "health is: " << s->getHealth() << endl;
*/










/*
    // calling the class by creating an object
    Hero ritika;

    // to set
    ritika.setHealth(69);

    // to print
    cout << "health is: " << ritika.getHealth() << endl;
    
    cout << "size is: " << sizeof(ritika);
*/


}