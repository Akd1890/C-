#include<iostream>
using namespace std;

class A {
   
   public:
   void sayHello() {
      cout << "Hello Akash" << endl;
   }

   int sayHello(char name) {
      cout << "Hello Akash" << endl;
      return 1;
   }


void sayHello(string name) {
      cout << "Hello" << name << endl;
   }
};

class B {
    public:
    int a;
    int b;

    public:
    int add() {
        return a+b;
    }
    void operator+ (B &obj) {
      /*  int value1 = this ->a;
        int value2 = obj.a;
        cout << "output " << value2 - value1 << endl;
        */
       cout << "Hello Akash" << endl;
    }

    void operator() () {
        cout << "I am square bracket " << this->a << endl;

    }
};

class Animal {
    public:
    void speak() {
        cout << "speaking " << endl;
    }
};

class Dog : public Animal {
    public:
    void speak() {
        cout << "Barking " << endl;
    }
};

int main() {

 Dog obj;
 obj.speak();












   /* B obj1, obj2;

    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2;
    obj1();
    */













//   B obj;
//   obj.a = 1;
//   obj.b = 2;
//   cout << obj.add() << endl;
























/*
    A obj;
    obj.sayHello();
*/
    return 0;
}