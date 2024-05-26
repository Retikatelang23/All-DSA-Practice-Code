#include<iostream>
#include<map>
using namespace std;

class Node {

    public:
    int data;
    Node* next;

    //constructor call
    Node(int d){

        this -> data = d;
        this -> next = NULL;
    }

    // destructor call
     ~Node(){
        int val = this-> data;
        if(this -> next != NULL){
            delete next;
            next = NULL;
        }
        cout << "memory is free for node with data " << val << endl;
    }  
};

void insertNode(Node* &tail, int element, int d){

    //assuming that the element is present in the list

    //empty list
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    else {
        //non empty list
        //asuming that the element is present in the list

        Node* curr = tail;

        while(curr -> data != element){
            curr = curr -> next;
        } 

        //element found -> current is representing element vala node
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}

void print(Node* tail){

    Node* temp = tail;

    if(tail == NULL){
        cout << "List is empty " << endl;
        return;
    }
    
    do {
        cout << tail -> data << " ";
        tail = tail -> next;
    }while(tail != temp);
    cout << endl;
}

bool detectLoop(Node* head){

    if(head == NULL){
        return false;
    }

    //creating a map
    map<Node*, bool> visited;

    //creating a node
    Node* temp = head;

    //check if cycle is present or not
    while(temp != NULL){

        // cycle is present
        if(visited[temp] == true){
            return true;
        }

        visited[temp] = true;
        temp = temp -> next;
    }

    return false;
}

void deleteNode(Node* &tail, int value){

    //empty list
    if(tail == NULL){
        cout << "List is empty " << endl;
        return;
    }
    else {
        //non empty

        //assuming that the value is present in the linked list
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value){
            prev = curr;
            curr = curr -> next;
        }
        prev -> next = curr -> next;

        //for 1 node linked list
        if(curr == prev){
            tail = NULL;
        }

        //>=2 node linked list
        else if(tail == curr){
            tail = prev;
        }
        curr -> next = NULL;
        //memory free
        delete curr; 
    }
}

int main(){

    Node* tail = NULL;

    //insertion in an empty node
    insertNode(tail, 5, 3);
    print(tail);

    /*insertNode(tail, 3, 8);
    print(tail);

    insertNode(tail, 8, 10);
    print(tail);

    insertNode(tail, 10, 12);
    print(tail);

    insertNode(tail, 10, 11);
    print(tail);*/

    //deleting the node
    deleteNode(tail, 3);
    print(tail);

}