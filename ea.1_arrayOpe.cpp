#include <iostream>
using namespace std;

class ArrayCal{
protected:
  int size;
  double* array;
public:
  ArrayCal(double* a,int n);
  ~ArrayCal();
  double max();
};
ArrayCal::ArrayCal(double* a, int n){
  size = n;
  array = new double[size];
  for (int i=0; i< size ; i++){
    array[i]=a[i];
  };
}
ArrayCal::~ArrayCal(){
  delete [] array;
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

class ArrayOpe : public ArrayCal{
public:
  ArrayOpe(double* a, int n);
  double scalar_product(double* src);
  void add_array(double* src, double* dst);
};


ArrayOpe::ArrayOpe(double* a, int n):ArrayCal(a, n){
}

double ArrayOpe::scalar_product(double* src){
  double x = 0;
  for (int i = 0; i< size ; i++){
    x += array[i]*src[i];
  }
  return x;
}

void ArrayOpe::add_array(double* src, double* dst){
  for (int i = 0; i< size ; i++){
    dst[i] = array[i]+src[i];
  }
}


int main(){
  double a[]={1.1, 2.2, 3.3, 4.4};
  int n = sizeof a / sizeof a[0];

  cout << "a = { " ;
  for (int i = 0; i<n ; i++){
    cout << a[i] << " ";
  }
  cout << "}" << endl;

  ArrayOpe ap(a,n);
  cout << "Max : "<< ap.max() << endl;
  double b[]={8.8, 7.7, 6.6, 5.5};

  cout << "b = { " ;
  for (int i = 0; i<n ; i++){
    cout << b[i] << " ";
  }
  cout << "}" << endl;
  
  cout << "Scalar Product : "<< ap.scalar_product(b) << endl;
  double c[n];
  ap.add_array(b,c);

  cout << "a + b = { " ;
  for (int i=0; i< n; i++){
    cout << c[i] << ' ';
  }
  cout << "}" << endl;
}
