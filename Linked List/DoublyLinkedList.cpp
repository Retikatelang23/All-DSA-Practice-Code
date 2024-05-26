#include<iostream>
using namespace std;

class Node {

    public:
        int data;
        Node* prev;
        Node* next;

    //constructor call
    Node(int d){
        this -> data = d;
        this -> next = NULL;
        this -> prev = NULL;
    }  

    // destructor call
    ~Node(){
        int val = this-> data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout << "memory is free for node with data " << val << endl;
    }  
};

// to print the linked list
void print(Node* head){

    //creation of node
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

// to find the length of the linked list
// int getLength(Node* head){

//     int len = 0;
//     Node* temp = head;

//     while(temp != NULL){
//         len++;
//         temp = temp -> next;
//     }
//     return len;
// }

void insertAtHead(Node* &head, int d){

    // empty list hai to usko alag se handle karna
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
    }
    else {
        //creation of node
        Node* temp = new Node(d);
        temp ->next = head;
        head -> prev = temp;
        head = temp;  
    }                                          
}

void insertAtTail(Node* &tail, int d){

    // for empty list
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
    }
    else {

        // creation of node
        Node* temp = new Node(d);
        tail -> next = temp;
        temp -> prev = tail;
        temp -> next = NULL;    
    }
}

void insertAtPosition(Node* &tail, Node* &head, int position, int d){

    // first position par dalne ke liye
    if(position == 1){
        insertAtHead(head, d);
        return;
    }

    // middle mai pass karna hai to pehele traverse karna padega
    // creation of node jo head ko point kar raha hai
    Node* temp = head;

    int cnt = 1;
    // position tak pohochne ke liye
    while(cnt < position - 1){
        temp = temp -> next;
        cnt++;
    }

    // last mai insert karna hai to
    if(temp -> next == NULL){
        insertAtTail(tail, d);
        return;
    }

    // jo node insert karni hai
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;

}

void deleteNode(int position, Node* &head){

    // if we want to delete the starting node
    if(position == 1){
        //ek temp variable banaya jismai head stored hai
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }
    else{

        //deleting any middle or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;

        while(cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        
        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}

int main(){

    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;
    //print(head);

    //cout << getLength(head) << endl;

    insertAtHead(head, 8);
    print(head);
    insertAtHead(head, 6);
    print(head);
    // insertAtHead(head, 4);
    // print(head);
    // insertAtHead(head, 2);
    // print(head);

    insertAtTail(tail, 9);
    print(head);

    insertAtPosition(tail, head, 4, 20);
    print(head);

    deleteNode(1, head);
    print(head);

    deleteNode(2, head);
    print(head);

    deleteNode(3, head);
    print(head);

    deleteNode(4, head);
    print(head);

}