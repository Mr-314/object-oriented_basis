#include <iostream>
using namespace std;

int main(){
  int n1, n2;
  cout << "10進数を入れてください : " << flush;  
  cin >> n1;
  cout << "16進数表示  " << hex << n1 << endl;
  cout << "8進数表示  " << oct << n1 << endl;
  
  cout << "16進数を入れてください : " << flush;
  cin >> hex >> n2 ;
  cout << "10進数表示  " << dec << n2 << endl;
}