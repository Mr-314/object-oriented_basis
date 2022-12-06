#include <iostream>
#include <string>
using namespace std;

class Flower{
  string name;
public:
  Flower(string f);
  void showFlowerName();
};

Flower::Flower(string f){
  name = f;
}

void Flower::showFlowerName(){
  cout << name << endl;
}

int main(){
  Flower a("daisy");
  Flower b("sunflower");
  
  b.showFlowerName();
}