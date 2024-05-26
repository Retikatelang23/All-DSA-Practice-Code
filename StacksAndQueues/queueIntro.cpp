#include<iostream>
#include<queue>
#include<stack>
using namespace std;

int main(){

    //create a queue
    queue<int> q;

    stack<int> s;

    q.push(2);
    cout <<"front of queue is: " << q.front() << endl;
    q.push(8);
    cout <<"front of queue is: " << q.front() << endl;
    q.push(0);
    cout <<"front of queue is: " << q.front() << endl;
    q.push(5);
    cout <<"front of queue is: " << q.front() << endl;

    s.push(2);
    s.push(8);
    s.push(0);
    s.push(5);

    //cout << "size of queue is: " << q.size() <<endl;

    q.pop();

     
    

    cout << "After pop operation in queue: " << q.front()<< endl;

    s.pop();

    cout << "After pop operation in stack: " << s.top() << endl;

    //if empty or not
    if(q.empty()){
        cout << "queue is empty" << endl;
    }
    else{
        cout << "queue is not empty" << endl;
    }

    return 0;
}