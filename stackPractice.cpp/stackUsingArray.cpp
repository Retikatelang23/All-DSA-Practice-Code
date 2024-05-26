#include<iostream>
using namespace std;

class Stack {
    public:
        //properties
        int *arr;
        int top;
        int size;

        //behaviour
        //creating constructor -> setting the initial values
        Stack(int size){
            this -> size = size;
            arr = new int[size];
            top = -1;
        }

        void push(int element) {
            if(size - top > 1){
                top++;
                arr[top] = element;
            }
            else{
                cout << "Stack OverFlow" << endl;
            }
        }

        void pop() {
            if(top >= 0){
                top--;
            }
            else{
                cout << "Stack UnderFlow" << endl;
            }
        }

        int peek() {
            if(top >= 0){
                return arr[top];
            }
            else{
                cout << "Stack is Empty" << endl;
                return -1;
            }
        }

        bool isEmpty(){
            if(top == -1){
                return true;
            }
            else{
                return false;
            }
        }
};

int main(){

    Stack st(5);

    st.push(23);
    st.push(2);
    st.push(20);
    st.push(21);
    st.push(9);

    cout << st.peek() << endl;

    //cout << st.isEmpty() << endl;

    st.pop();

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

}