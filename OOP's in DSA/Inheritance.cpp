#include<iostream>
using namespace std;

// making a parent class 
class Human {

    public:
        int height;
        int weight;
        int age;

    public:
        int getAge(){
            return this->age;
        }

        void setWeight(int w){
            this-> weight = w;
        }
};

// syntax : class child_name: access_modifier parent_name {}
class Male: protected Human {

    public:
        string color;

    void sleeping(){

        cout << "male sleeping time: " << endl;
    }    

    int getHeight(){
        return this->height;
    } 
};

int main(){

    Male m1;

    cout << m1.getHeight() << endl;




    /* Male object1;

    cout << object1.age << endl;
    cout << object1.height << endl;
    cout << object1.weight << endl;

    cout << object1.color << endl;
    object1.setWeight(58);
    cout << object1.weight << endl;
    object1.sleeping();
    */
}