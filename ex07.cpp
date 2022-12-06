#include <iostream>
using namespace std;

class ArrayCal{
  int size;
  double array[50];
public:
  ArrayCal(double* a, int n);
  double max();
};

ArrayCal::ArrayCal(double* a, int n){
  size = n;
  for (int i=0; i< size ; i++){
    array[i]=a[i];
  };
}
double ArrayCal::max(){
  double maxval = array[0];
  for (int i = 1; i< size ; i++){
    if(maxval < array[i]){
      maxval=array[i];
    }
  }
  return maxval;
}
int main(){
  double a[]={1.1, 2.2, 3.3, 4.4};
  int n = sizeof a / sizeof a[0];
  ArrayCal ac(a,n);
  cout << "Max : "<< ac.max()
       << endl;
}