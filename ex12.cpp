#include <iostream>
using namespace std;

/* 抽象クラスとしての基本クラスShape */
class Shape{
    protected://継承クラスのみからアクセス可のアクセス指定子を入れる
    double area;
public:
 virtual double getArea() =0;  //純粋仮想関数として定義
};

/* 派生クラスCircle（円） */
class Circle : public Shape{ //Shapeクラスを外部からアクセス可にするアクセス指定子を入れる
  double radius;
public:
  Circle(double x);
  double getArea(); //面積を戻す
};
Circle::Circle(double x){radius = x;}  //半径を設定
double Circle::getArea(){
  area = radius*radius*3.14159265359;
  return area;
}

/* 派生クラスRectangle（矩形） */
class Rectangle : public Shape {  //Shapeクラスを外部からアクセス可で継承
  double width, height;
public:
  Rectangle(double x, double y);
  double getArea();  //面積を戻す
};
Rectangle::Rectangle(double x, double y){ //横と縦の長さを設定
  width=x;
  height=y;
}
double Rectangle::getArea(){
  area=width*height;
  return area;
}

int main(){

  Circle circ(1.2);
  cout << circ.getArea() << endl;  //オブジェクトcirc の面積を表示
  Rectangle rect(3.,4.2); //Rectangleクラスのオブジェクトrectを生成
  cout << rect.getArea() << endl; //オブジェクトrect の面積を表示

  /* Shapeクラスは抽象クラスなので，オブジェクトを生成できない。
     次の行はコメントをとるとエラーになる。 */
  //Shape s();
}