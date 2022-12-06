#include <iostream>
using namespace std;

void division(unsigned int& quotient, unsigned int& remainder);

int main(){
  unsigned int x=113, y=6;
  cout << "x : " << x << endl;
  cout << "y : " << y << endl;
  unsigned int q=x;
  unsigned int r=y;
  division(q, r);
  cout << "quotoent : " << q << endl;
  cout << "remainder: " << r << endl;
}

void division(unsigned int& quotient, unsigned int& remainder){
  unsigned int a, b, c;
  b = quotient/remainder;
  c = quotient%remainder;
  
  quotient = b;
  remainder = c;
  
  
}
