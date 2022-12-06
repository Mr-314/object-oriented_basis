#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
  string name;
  int japanese, english, math;

  fstream fin;
  fstream fout;
  fin.open("scoreList.txt",ios::in);
  fout.open("totalScore.txt",ios::out);
  while(fin  >>  name >> japanese >> english >> math){
    fout << name << ' ' << japanese+english+math << endl;
  }
  fin.close();
  fout.close();
}

