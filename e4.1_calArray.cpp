#include <iostream>
using namespace std;


double scalarProduct(double* a,double* b,int size){
  double x = 0;
  for(int j =0; j<size; j++){
    x += a[j]*b[j];
  }
  return x;
}
  
  
void addArray(double* a,double* b,double* c,int size){
  for(int j =0; j<size; j++){
    c[j] = a[j]+b[j];
  }
}



void showArray(double* a, int size){
  cout << "{ ";
  for(int i=0; i<size; i++){
    cout << a[i] << "  ";
  }
  cout << "}\n";
}

int main(){
  double a[]={4.2,-3.5,6,2.1};
  double b[]={3.7,9.2,-1.4,-10.4};
  int size = sizeof a / sizeof a[0]; //配列のサイズで，ここでは４である
  
  double sp;
  sp= scalarProduct(a,b,size);

  double c[size];
  addArray(a,b,c,size);

  cout << "a : ";
  showArray(a,size);
  cout << "b : ";
  showArray(b,size);
  cout << "a.b : " << sp << endl;
  cout << "a + b : ";
  showArray(c,size);
}
