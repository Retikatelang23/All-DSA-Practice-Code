#include<iostream>
#include<map>
using namespace std;

class Node {

    public:
        int data;
        Node * next;

    //constructor call
    Node(int data){
        this ->data = data;
        this ->next = NULL;
    }

    //destructor call for memory free
    ~Node(){
        int val = this-> data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout << "memory is free for node with data " << val << endl;
    }  
};

//head = n1
// to print at head
void InsertAtHead(Node * &head, int d){

    // new node creation
    Node * temp = new Node(d);
    //temp ke address vale section mai head ka adres store karna
    // temp ko head/n1 ke address ko point kar raha hai
    temp -> next = head;
    // head ko temp par move kar diya in order to add the new node infront
    head = temp;
}


// head bhi aur tail bhi initailly first number ko point kar raha hai
// to print at tail
void InsertAtTail(Node* &tail, int d){

    // creation of new node
    Node * temp = new Node(d);
    //as head aur tail ek hi node ko point kar rahe hai so
    tail -> next = temp;
    //tail ko uske next dabbe par point karwa dena
    tail = tail -> next; // instead of tail-> next we can write temp
}    

//print function to print the linked list
void print(Node * &head){

    //ek aur pointer banaya temp naam ka jo mere pehele node ko point karta hai
    Node * temp = head;
    //current node ko print karna
    //temp ko aage bandha dena
    while(temp != NULL){
        cout << temp -> data << " ";
        // temp ko aage badhana
        temp = temp-> next;
    }
    cout << endl;
}

void InsertAtPosition(Node* &tail,Node* &head, int position, int d){

    //agar first position par dalna hai to
    //insert at first position
    if(position == 1){
        InsertAtHead(head, d);
        return;
    }

    // temp naam ka node banaya jo head ko point kar raha hai
    Node * temp = head;
    // intially pehele node par hu so count ko 1 rakha hai
    int cnt = 1;

    // nth position tak jana hai matlab loop ko n-1 position tak chalayenge
    while(cnt < position-1){
        // temp ko aage badhate raho
        temp = temp ->next;
        cnt++;
    }

    //insert at last postion
    if(temp -> next == NULL){
        InsertAtTail(tail, d);
        return;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}

Node* floydDetectLoop(Node* head) {
    if (head == NULL) {
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while (slow != NULL && fast != NULL) {
        fast = fast->next;
        if (fast != NULL) {
            fast = fast->next;
        }
        slow = slow->next;

        if (slow == fast) {
            return slow; // Loop detected
        }
    }

    return NULL; // No loop detected
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
            cout << "present at element " << temp -> data << endl;
            return true;
        }

        visited[temp] = true;
        temp = temp -> next;
    }

    return false;
}

Node* getStartingNode(Node* head){

    if(head == NULL){
        return NULL;
    }

    //finding the position of fast
    Node* intersection = floydDetectLoop(head);
    //slow ko vapas head par initialize kiya in order to get the beginning of the node
    Node* slow = head;

    while(slow != intersection){
        slow = slow -> next;
        intersection = intersection -> next;
    }

    return slow;
}

void removeLoop(Node* head){

    if(head == NULL){
        return;
    }

    Node* startOfLoop = getStartingNode(head);
    Node* temp = startOfLoop;

    while(temp -> next != startOfLoop){
        temp = temp -> next;
    }

    temp -> next = NULL;
}

void deleteNode(int position, Node* &head){

    // if we want to delete the starting node
    if(position == 1){
        //ek temp variable banaya jismai head stored hai
        Node* temp = head;

        head = head -> next;
        //starting node jo delete ki uski memory free karna
        // jo remove ho raha hai vo abhi bhi jisko point kar raha tha
        // vaha point kar raha hai so to remove that
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
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}

int main(){

    Node * n1 = new Node(10);
    //cout << n1 -> data << endl;
    //cout << n1 -> next << endl;

    // to tell that head and n1 is same
    Node * head = n1;
    Node * tail = n1;

    //print(head);

    InsertAtTail(tail, 12);
    InsertAtTail(tail, 16);

    // print(head);

    InsertAtPosition(tail, head, 1, 55);

    print(head);

    tail -> next = head -> next;
    
    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;
    //print(head);
/*
    if(detectLoop(head)){
        cout << "cycle is present " << endl;
    }
    else{
        cout << "no cycle " << endl;
    }
    */
   
   if(floydDetectLoop(head) != NULL){
        cout << "cycle is present " << endl;
    }
    else{
        cout << "no cycle " << endl;
    }

    cout << getStartingNode(head) -> data << endl;

    removeLoop(head);
    print(head);
    
/*
    deleteNode(2, head);
    print(head);
    */
}