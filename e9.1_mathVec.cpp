#include <iostream>
using namespace std;

class MathVec{
  int size;
  double* vec;


public:
  MathVec(double* a,int n);
  ~MathVec();
  double average();
};
MathVec::MathVec(double* a, int n){
  size = n;
  vec = new double[size];
  for (int i=0; i< size ; i++){
    vec[i]=a[i];
  };
}
MathVec::~MathVec(){
  delete [] vec;
}
  

double MathVec::average(){
  double s = 0.;
  for (int i = 0; i< size ; i++){
    s += vec[i];
  }
  s = s/size;
  return s;
}

int main(){
  double a[]={1.4, 2.3, 3.2, 4.1};
  int n = sizeof a / sizeof a[0];
  cout << "{ " ;
  for (int i = 0; i<n ; i++){
    cout << a[i] << " ";
  }
  cout << "}" << endl;
  MathVec mv(a,n);
  double ave = mv.average();
  cout << "Average of the elements : " << ave << endl;
}
