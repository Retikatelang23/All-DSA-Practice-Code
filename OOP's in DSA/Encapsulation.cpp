#include<iostream>
using namespace std;

class Student {

    private:
        int name;
        int age;
        int height;

    public:
        int getAge(){
            return this->age;
        }
};

int main(){

    Student S1;
}