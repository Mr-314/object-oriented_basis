#include <iostream>
#include <string>
#include <chrono>
#include <thread>
using namespace std;

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
	cout << name << " が降臨した!"　<< endl << endl;
}

int Hero::attack(){
	int pt = 10;
	cout << name << "が攻撃した" << endl; return pt;
}
int Hero::damaged(int pt){
	HP -= pt;
	cout << name << "は" << pt
			<< "ポイントのダメージを受けた" << endl<< endl;
	return HP;
}
bool Hero::runaway(){
	cout << name << "は逃げた" << endl << endl;
	return true;
}

class Monster{
	int HP;
  public:
	Monster();
	int attack();
	int damaged(int pt);
};

Monster::Monster(){
	HP =20;
	cout << "モンスターが現れた!"<< endl << endl;
}

int Monster::attack(){
	int pt = 10; cout << "モンスターが攻撃した" << endl;
	return pt;
}
int Monster::damaged(int pt){
	HP -= pt;
	cout << "モンスターは" << pt
			<< "ポイントのダメージを受けた" << endl<< endl;
	return HP;
}

int main(){
	