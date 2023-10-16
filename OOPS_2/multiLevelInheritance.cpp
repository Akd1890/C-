#include<iostream>
using namespace std;

class Animal {

    public:
    int age;
    int weight;

    public:
    void speak() {
        cout << "Speaking " << endl;
    }
};

class Dog: public Animal {

};

class Germanshephed: public Dog {


};

int main() {

    
    Germanshephed g;
    g.speak();

    



    return 0;
}