#include<iostream>
using namespace std;

int main(){
   
   int arr[5] = {1,2,3,4,5}; // for integer case , here arr will print only address while *arr will print value from address
   char ch[6] = "abcde"; // it will print entire content

   cout << arr << endl;
//    cout << *arr << endl;

   
   cout <<  ch << endl; 

     char *c =&ch[0];
     // it will print entire string
     cout << c << endl;

     char temp = 'z';
     char *p = &temp;
     cout<< p << endl;

    return 0;
}