#include<iostream>
#include<queue>
using namespace std;

int main(){

    // create a queue

    deque<int> d;

    d.push_front(12);
    d.push_back(14);

    cout << d.front() << endl;
    cout << d.back() << endl;

    d.pop_front();
    cout << d.front() << endl;
    cout << d.back() << endl;

    d.pop_back();
    
    if(d.empty()) {

        cout << "queue is empty " << endl;
} else {
    cout << "Queue is not empty " << endl;
}





/*
    q.push(12);
    cout << "front of q is " << q.front() << endl;

    q.push(15);
    cout << "front of q is " << q.front() << endl;

    q.push(16);
    cout << "front of q is " << q.front() << endl;

    cout << "size of queue is : " << q.size() << endl;

    q.pop();
    q.pop();
    q.pop();
    
    cout << "size of queue is : " << q.size() << endl;
    
    if(q.empty()) {
        cout << "queue is empty " << endl;
    } else {
        cout << "queue is not empty " << endl;

    }
*/
    return 0;
}