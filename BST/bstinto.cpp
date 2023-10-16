#include<iostream>
using namespace std;

class Node {

    public:
     int data;
     Node* left;
     Node* right;

     Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;

     }
};

Node* insertIntoBST(Node* &root, int d) {

    //base case
    if(root == NULL) {
         root = new Node(d);
         return root;
    }

    if( d > root -> data) {
        //We have insert into right side of root

        root->right = insertIntoBST(root->right, d);

    } else {
        // left side
        root->left = insertIntoBST(root->left, d);
    }
    return root;
}

void takeInput(Node* &root){

    int data;
    cin >> data;

    while(data != -1) {
        insertIntoBST(root, data);
        cin >> data;
    }
}

int main(){

    Node* root = NULL;

    cout << "Enter data to create BST" << endl;
    takeInput(root);

    return 0;
}