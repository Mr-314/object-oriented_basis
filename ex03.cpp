#include <iostream>
using namespace std;

int main(){

  char chr[50];
  cout <<  "好きな単語を入力してください : ";
  cin >> chr;
  for (int i=0; chr[i]!=0 ; i++){
    cout << dec << i+1 << " バイト目 : "
         << hex << (int) (unsigned char) chr[i]
         << endl;
  }
}