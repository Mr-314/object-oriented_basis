#include <iostream>
#include <string>
#include <chrono>
#include <thread>

using namespace std;

//////////////////////////////////////////
class Hero{
  string name;
  int HP;
public:
  Hero(string nameInput);
};

Hero::Hero(string nameInput){
  name = nameInput;
  HP = 50;
  cout << name << " が降臨した！"<< endl << endl;
}

///////////////////////////////////
class Monster{
  int HP;
public:
  Monster();
};

Monster::Monster(){
  HP =20;
  cout << "モンスターが現れた！"<< endl << endl;
}

/////////////////////////////////////
int main(){
  string name;

  cout << "勇者に名前をつけてください > " ;
  cin >> name ;
  cout << endl;
  Hero I(name);
 
  while(true){
    this_thread::sleep_for(chrono::seconds(2));
    Monster monster;
    }
}
