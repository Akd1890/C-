#include<iostream>
using namespace std;

class Hero{  

   private:  
     //properties
    // char name[100];
    int health;

    public:
    char *name;
    char level;
    static int timeToComplete;
    

    Hero() {
        cout << "Constructor Called" << endl;
        name = new char[100];
    }

    //Parameterised constructor
    Hero(int health) {
        // cout <<"this -> " << this << endl;
      this -> health = health;
    }

    Hero(int health, char level) {
        this -> level = level;
        this -> health = health;
    }

    // copy constructor

    Hero(Hero& temp) {

      char *ch = new char[strlen(temp.name) + 1];
      strcpy(ch, temp.name);
      this->name = ch;

        cout << "Copy Constructor called "<< endl;
        this->health = temp.health;
        this->level = temp.level;
 
    }

    void print(){
        cout << endl;
        cout << " [ Name: " << this->name<< " ,";
        cout << "health: " << this->health << " ,";
        cout << "level: " << this->level << " ]";
        cout << endl;

    }

    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h) {
          
          health = h;
        }
      void setLevel(char ch){

        level = ch;
      }  

      void setName(char name[]) {
           strcpy(this->name, name);
      }

      //destructor
      ~Hero() {
           cout << "Destructor bro called" << endl;
      }

};

int main(){

    // static
    Hero a;

    //dynamically
        
    Hero *b = new Hero();
    // manually destructor called
      delete b;
    
    
    return 0;

}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    // Hero hero1;
    // hero1.setHealth(12);
    // hero1.setLevel('D');
    // char name[6] = "Akash";
    // hero1.setName(name);
    
    // // hero1.print();

    // //use dafault copy constructor

    // Hero hero2(hero1);
    // // hero2.print();
    // // Hero hero2 = hero1;

    // hero1.name[0] = 'P';
    // hero1.print();

    // hero2.print();

    // hero1 = hero2;

    // hero1.print();

    // hero2.print();

    

 
























    //   Hero S(70, 'C');
    //   S.print();
      
    //   // copy constructor
    //   Hero R(S);
    //   R.print();

























    // // object created statically
    
    // Hero ramesh(10);
    // cout << "Address of ramesh " << &ramesh << endl;
    // // ramesh.getHealth();
    // ramesh.print();

    // //Dynamically
    // Hero *h = new Hero(11); 
    // h->print();

    // Hero temp(22, '8');
    // temp.print();
    


































/*
    //static allocation
      Hero a;
      a.setHealth(80);
      a.setLevel('B');

      cout << "level is " <<a.level << endl;
      cout << "level is " <<a.getHealth() << endl;


      //dynamically
      Hero *b = new Hero;
      b->setLevel('A');
      b->setHealth(70);
      cout << "level is " <<(*b).level << endl; // either we can write (*b).level or b->level
      cout << "level is " <<(*b).getHealth() << endl;
*/

     
    //  // creation of an object
    // Hero ramesh;
    // cout << "Size of Rmaesh is " <<sizeof(ramesh) << endl;
    //  cout << "Rames health is " << ramesh.getHealth() << endl;
    // // ramesh.health = 70; 
    // ramesh.setHealth(70);
    // ramesh.level = 'A';

    // cout << "health is: " <<ramesh.getHealth() << endl;
    // cout << "health is: " <<ramesh.level << endl;


    // // cout << "size : "<<sizeof(h1)<< endl;


//     return 0;
// }