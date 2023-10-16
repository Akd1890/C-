#include<iostream>
#include<map>
using namespace std;

class Node {

    public:
    int data;
    Node* next;
     
     //Constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
    //destructor
    ~Node() {
        int value = this -> data;
        //Memory free
        if(this -> next != NULL){
            delete next;
            this->next = NULL;
        }
        cout << "memory is free for node with data " << value << endl;
    }
};

void InsertAtHead(Node* &head, int d) {

    // Create new node
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp ;
}

void InsertAtTail(Node* &tail, int d) {
      // Create new node
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail->next;
}

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp ->next;
    }
    cout << endl;

}

void InsertAtPosition(Node* &tail,Node* & Head,int position, int d){

//insert at starting
    if(position == 1) {
        InsertAtHead(Head, d);
        return;
    }

    Node* temp = Head;
    int cnt = 1;

    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }

    // Inserting at last Position
    if(temp ->next == NULL){
        InsertAtTail(tail,d);
        return;
    }
    //creating a node for d
    Node* NodeToInsert = new Node(d);

    NodeToInsert -> next = temp -> next;
    temp->next= NodeToInsert;

}

void deleteNode(int position, Node* & head){
    
    //deletiing first or start node
    if(position == 1){
        Node* temp = head;
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
            prev -> next = curr -> next;  
            curr -> next = NULL;
            delete curr;
    }

}
int main(){
   //created a new node
    Node* node1 = new Node(10);
    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;

    //headed pointed to node1
    Node* head = node1;
    Node* tail = node1;
    print(head);
     
     InsertAtTail(tail, 12);

     print(head);
     
     InsertAtTail(tail, 15);
     print(head);

     InsertAtPosition(tail,head,4,22);
     print(head);

     cout<< "head " << head -> data << endl;
     cout<< "tail " << tail -> data << endl;

     deleteNode(4,head);
     print(head);
   
   return 0;
}


Node* floydDetectLoop(Node* head) {

    if(head == NULL)
           return NULL;

  Node* slow = head;
  Node* fast = head;

  while(slow != NULL && fast != NULL) {

    fast = fast -> next;
    if(fast != NULL) {
        fast = fast -> next;
    }
      
      slow = slow -> next;

      if(slow == fast) {
        cout << "present at " << slow -> data << endl;
        return slow;
      }

  }
  return NULL;

}
// start node of loop in LL
Node* getStartingNode(Node* head){

    if(head == NULL)
        return NULL;

    Node* intersection = floydDetectLoop(head);
    Node* slow = head;

    while(slow != intersection) {

        slow = slow -> next;
        intersection = intersection -> next;
    }
    return slow;
    }
 // remove loop in LL
    void removeLoop(Node* head){

        if(head == NULL)
           return;

        Node* startofLoop = getStartingNode(head);
         Node* temp = startofLoop;
         
         while(temp -> next != startofLoop) {
            temp = temp -> next;
         }

         temp -> next= NULL;
    }
