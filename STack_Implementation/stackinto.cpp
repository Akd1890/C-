#include<iostream>
#include<stack>
using namespace std;

class Stack {
      // properties
       public:
            int *arr;
            int top;
            int size;


      // behaviour 
        Stack(int size) {
            this -> size = size;
            arr = new int[size];
            top = -1;
        }

        void push(int element) {
            if(size - top > 1) {
                top++;
                arr[top] = element;
            } else{
                cout << "stack Overflow " << endl;
            }
            
        }
        void pop() {
            if(top >= 0) {
                top--;
            } else {
                cout << "Stack underflow" << endl;
            }

        }

        int peek() {
            if(top>=0) 
              return arr[top];
              else{
                cout << "Stack is Empty" << endl;
                  return -1;
              }

        }

        int isEmpty() {
            if(top == -1) {
                return true;
            } else{
                return false;
            }

        }
};

int main() {

    Stack s(5);

    s.push(22);
    s.push(43);
    s.push(44);
    s.push(54);
    s.push(33);
    s.push(56);

    cout <<s.peek() << endl;
    s.pop();
    cout <<s.peek() << endl;
    s.pop();
    cout <<s.peek() << endl;
    s.pop();
    cout <<s.peek() << endl;

    if(s.isEmpty()){
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }




    

/*
    // creation of stack
    stack<int> s;

    // push opeartion
    s.push(2);
    s.push(3);

    //pop
    s.pop();

    cout << "Printing top element " << s.top() << endl;

    if(s.empty()){
        cout<< "Stack is empty" << endl;
        }
        else {
            cout << "Stack is not empty" << endl;
        
    }

  cout << "size of stack "<< s.size() << endl;
*/
    return 0;
}