#include<iostream>
using namespace std;

// void update(int **p2) {
//     // p2 = p2 + 1;
//     // no change

//     // *p2 = *p2+1;
//     // change will happened

//     **p2 = **p2 + 1;
//     // yes it will change the value but addres will remain same



// }

int main(){

/*
    int i = 5;
    int *p = &i;
    int** p2 = &p;

    cout<< endl << endl << "code is working" << endl << endl;

    cout <<"printing p " << p << endl;
    // cout << "address of p  " << &p << endl;
     cout << *p2 << endl;

     cout<< i << endl;
     cout<< *p << endl;
     cout<< **p2 << endl;

     cout << &i << endl;
     cout << p << endl;
     cout << *p2 << endl;

     cout<< &p << endl;
     cout<< p2 << endl;
     
    cout<< "before " <<  i << endl;
     cout<<"before " <<  p << endl;
     cout<<"before "<< p2 << endl;
update(p2);
     cout <<"after " << i << endl;
     cout <<"after "<< p << endl;
     cout <<"after " << p2 << endl;

*/

int first = 110;
int *p = &first;
int **q = &p;
int second = (**q)++ + 9;
cout<< first << " " << second << endl;


    return 0 ;
}