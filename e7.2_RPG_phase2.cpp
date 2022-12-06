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
  int attack();
  int damaged(int pt);
  bool runaway();
};

Hero::Hero(string nameInput){
  name = nameInput;
  HP = 50;
  cout << name << " が降臨した！"<< endl << endl;
}
int Hero::attack(){
  int pt = 10;
  cout << name << "が攻撃した" << endl;
  return pt;
}
bool Hero::runaway(){
  cout << name << "は逃げた" << endl << endl;
  return true;
}
int Hero::damaged(int pt){
  HP -= pt;
  cout << name << "は" << pt << "ポイントのダメージを受けた" << endl<< endl;
  return HP;
}
///////////////////////////////////
class Monster{
  int HP;
public:
  Monster();
  int attack();
  int damaged(int pt);
};

Monster::Monster(){
  HP =20;
  cout << "モンスターが現れた！"<< endl << endl;
}

int Monster::attack(){
  int pt = 10;
  cout << "モンスターが攻撃した" << endl;
  return pt;
}

int Monster::damaged(int pt){
  HP -= pt;
  cout << "モンスターは" << pt << "ポイントのダメージを受けた" << endl<< endl;
  return HP;
}

/////////////////////////////////////
int main(){
  string name;
  int win=0;

  cout << "あなたは勇者です。" << endl;
  cout << "この世界にはモンスターがたくさんいますが，" << endl;
  cout << "一匹でも倒せばあなたの勝ちです。" << endl;
  cout << "勇者に名前をつけてください > " <<flush;
  cin >> name ;
  cout << endl;
  Hero I(name);

  while(true){
    this_thread::sleep_for(chrono::seconds(2));
    Monster monster;

    while(true){
      int action;
      bool ranaway = false;
      int pt;
      int monsHP;
      int heroHP;
      
      cout << "どうしますか？　(1) 攻撃する, (2) 逃げる > "  <<flush;
      cin >> action ;
      cout << endl;

      switch(action){
      case 1:
	pt =I.attack();
	monsHP=monster.damaged(pt);
	break;
      case 2:
	ranaway = I.runaway();
	break;
      default:
	break;
      }

      if (ranaway) break;
      
      if (monsHP <= 0){
	win = 1;
	break;
      } 

      this_thread::sleep_for(chrono::seconds(1));
      pt=monster.attack();
      heroHP = I.damaged(pt); 

      if (heroHP <= 0){
	win = -1;
	break;
      } 
      
    }
    
    if(win==1){
      cout << "モンスターを倒しました。あなたは勝ちました！" << endl;
      break;
    }
    if(win==-1){
      cout << "やられました。あなたの負けです。" << endl;
      break;
    }
  }
}
