#include <iostream> 
#include <string> 
using namespace std;
class YearConverter{
private:
  int western;
public:
  YearConverter(int year);
  void showReiwa();
private:
  void valid_year(int y);
  void invalid_year();
};
YearConverter::YearConverter(int year){
  western = year;
}
void YearConverter::showReiwa(){
  if(2019 <= western){
    valid_year(western-2018);
  }else{
    invalid_year();
  }
}

void YearConverter::valid_year(int y){
  cout << "令和" << y << "年" <<endl;
}
void YearConverter::invalid_year(){
  cout << "令和時代ではありません" << endl;
}
int main(){
  int year;
  cout << "西暦を入力してください > ";
  cin >> year ;
  YearConverter yc(year);
  yc.showReiwa();
}