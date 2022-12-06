#include <iostream>
using namespace std;

int main(){
  int* p;
  cout << p << endl;   // output 1

  p= new int(10);

  cout << *p << endl;  // output 2
  cout << p << endl;   // output 3
  cout << &p << endl;  // output 4

  cout << *p+20 << endl; // output 5
  delete p;  
}