class Flower{
    string name;
    string color;
public:
    Flower();
    Flower(string n);
    Flower(string n, string c);
    void showNameAndColor();
};
Flower::Flower(){
    name = "NoName"; color = "NoColor";
}
Flower::Flower(string n){
    name = n; color = "NoColor";
}
Flower::Flower(string n, string c){
    name = n; color = c;
}
void Flower::showNameAndColor(){
    cout << name <<", "
         << color << endl; }

int main(){
Flower f1;
f1.showNameAndColor();

Flower f2("sunflower");
f2.showNameAndColor();

Flower f3 = f2;
f3.showNameAndColor();

Flower f4 = Flower("sunflower");
f4.showNameAndColor();

Flower f5("sunflower", "yellow");
f5.showNameAndColor();

Flower f6 = {(string) "sunflower",
             (string) "yellow"};
f6.showNameAndColor();
}