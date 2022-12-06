#include <iostream>
using namespace std;

class MathVec{
  int size;
  double vec[50];
public:
  MathVec(double* b, int n);
  double average();
};



MathVec::MathVec(double* a, int n){
  size = n;
  for (int i=0; i< size ; i++){
    vec[i]=a[i];
  };
}
double MathVec::average(){
  double aveval = vec[0];
  for (int i = 1; i< size ; i++){
    aveval+=vec[i];
  }
  return aveval/size;
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
