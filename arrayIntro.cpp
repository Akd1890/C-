#include<iostream>
using namespace std;

void printArray(int arr[], int size){

   cout<<"printing the array "<< endl;
 //print the array
 for(int i=0; i<size; i++) {
cout<< arr[i] <<" ";
 }
 cout<<"printing Done "<< endl;
}


int main(){

//declare
 int number[15];

//accessing an array 
 cout << "value at 8 index " << number[8] << endl;

//intializing an array
int second[3] = {4, 7 ,11};

//accessing an array 
 cout << "value at 2 index " << second[2] << endl;

 cout << endl << "everything is fine" << endl << endl;
 
 int third[15] = {2,3};
 
 int n = 15;
 printArray(third, 15);

 int thirdSize = sizeof(third)/sizeof(int);
 cout<< "size of Third is " << thirdSize <<endl;
//  cout<<"printing the array "<< endl;
//  //print the array
//  for(int i=0; i<n; i++) {
// cout<< third[i] <<" ";
//  }
 //initializing all location with 0

 int forth[10] = {0};
 
 n = 10;
 printArray(forth, 10);

//  cout<<"printing the array "<< endl;
//  //print the array
//  for(int i=0; i<n; i++) {
// cout<< forth[i] <<" ";
//  }
//initilization all location with 1(not possible with given line)
  int fifth[10] = {1};
 
 n = 10;
 printArray(fifth, 10);

//  cout<<"printing the array "<< endl;
//  //print the array
//  for(int i=0; i<n; i++) {
// cout<< fifth[i] <<" ";
//  }

char ch[5] = {'a', 'b', 'c', 'd', 'e'};
cout<< ch[3] <<endl;

    return 0;
}