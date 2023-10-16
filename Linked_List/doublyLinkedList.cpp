#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d) {
        this ->data= d;
        this ->prev =NULL;
        this->next = NULL;
    }

    ~Node() {
        int val = this -> data;
        if(next !=NULL) {
            delete next;
            next = NULL;
        }
        cout << "Memory free for node with data "<< val << endl;
    }
};

//trasversing a linked list
void print(Node* head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp -> data<<" ";
        cout<< temp -> next;
    }
    cout << endl;
}
//gives length of Linked List
int getLength(Node* head) {
    int len = 0;
    Node* temp = head;

    while(temp != NULL) {
        len++;
        cout<< temp -> next;
    }
    return len;
}
void InsertAtHead(Node* &head, int d) {

    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;

}

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;

}

void insertAtPosition(Node* & tail,Node* & head, int position, int d) {

    //insert at starting
    if(position == 1) {
        InsertAtHead(head, d);
        return;
    }
    Node* temp = head;
    int cnt = 1;

    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }

    // Inserting at last Position
    if(temp ->next == NULL){
        insertAtTail(tail,d);
        return;
    }
    //creating a node for d
    Node* NodeToInsert = new Node(d);

    NodeToInsert ->next = temp -> next;
    temp->next->prev = NodeToInsert;
    temp->next = NodeToInsert;
    NodeToInsert -> prev = temp;



}
void deleteNode(int position, Node* & head){
//deletiing first or start node
    if(position == 1){
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp ->next;
        temp -> next = NULL;
        delete temp;
        head = head -> next;
        //memory free start node
        temp -> next = NULL;
        delete temp;

    } else {
        //deleting any middle or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
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
    
    print(head);
    // cout << getLength(head) << endl;

    InsertAtHead(head, 11);
    print(head);
    cout<< "head " << head -> data << endl;
    cout<< "tail " << tail -> data << endl;


    InsertAtHead(head, 13);
    print(head);
    cout<< "head " << head -> data << endl;
    cout<< "tail " << tail -> data << endl;

   
    InsertAtHead(head, 18);
    print(head);
    cout<< "head " << head -> data << endl;
    cout<< "tail " << tail -> data << endl;
    

    insertAtTail(tail, 25);
    print(head);
    cout<< "head " << head -> data << endl;
    cout<< "tail " << tail -> data << endl;
    

    insertAtPosition(tail,head,2,100);
    print(head);
    cout<< "head " << head -> data << endl;
    cout<< "tail " << tail -> data << endl;

    deleteNode(1, head);
    cout<< "head " << head -> data << endl;
    cout<< "tail " << tail -> data << endl;
    
    

    return 0;
}
