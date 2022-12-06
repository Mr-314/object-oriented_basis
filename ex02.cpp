#include <iostream>
using namespace std;

int main(){
  int a = 10;
  int b = 20;
  int* ptr;
  int& ref = a;

  cout << ptr << endl;    // output 1 
  cout << &ptr << endl;   // output 2
  cout << &ref << endl;   // output 3

  cout << ref << endl;     // output 4 
  cout << *&ref << endl;   // output 5 
  cout << &a << endl;      // output 6 
  
  ptr = &a;   
  *ptr = b;     

  cout << a << endl;   // output 7
  cout << b << endl;   // output 8 
  cout << ref << endl; // output 9 

  b=30;
  cout << *ptr << endl;  // output 10
  cout << ptr << endl;   // output 11
  cout << &ptr << endl;  // output 12
  cout << *&ptr << endl; // output 13
  cout << &*ptr << endl; // output 14
  
  cout << ref << endl;   // output 15
  cout << &ref << endl;  // output 16
  cout << *&ref << endl; // output 17
  cout << &*&ref << endl;// output 18
}