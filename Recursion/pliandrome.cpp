#include<iostream>
using namespace std;

bool checkPalindrome(string str,  int j, int i) {

    // base case
    if(i>j)
         return true;

   if(str[i] != str[j])  
       return false;
       else{
        //Recursive call
        return checkPalindrome(str, i+1, j+1);
       }    
       

}

int main(){

    string name = "abbccbba";
    cout << endl;

bool isPalindrome =  checkPalindrome(name, 0, name.length()-1 ); {

    if(isPalindrome) {

        cout<< "Its a Palindrome" << endl;
     }
     else {
        cout << "Its not a palindrome" <<endl;
     }



}


    return 0;
}