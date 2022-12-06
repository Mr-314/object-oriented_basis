#include <iostream>
using namespace std;

int main(){
  int* a;
  cout << a << endl;  
  int n;
  cout << "配列のサイズを入力してください> ";
  cin >> n ;
  a = new int[n];
  for (int i=0; i<n ; i++){
    a[i] = i*3;
    cout << a[i] << endl; 
  };
 
  cout << *a << endl; 
  cout << a << endl;  
  cout << &a << endl; 
  
  delete [] a;
}