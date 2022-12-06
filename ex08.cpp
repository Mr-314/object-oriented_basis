#include <iostream>
#include <ctime>
using namespace std;

class Nothing{
    int a;
public:
    Nothing();
    ~Nothing();
    void func_in_class();
};
Nothing::Nothing(){
    a = rand();
    cout << "コンストラクタ" << a << endl;
}
Nothing::~Nothing(){
    cout << "デストラクタ" << a << endl;
}
void Nothing::func_in_class(){
    cout << "I do nothing." << endl;
    }
void func(){
Nothing nothing; nothing.func_in_class();
}

int main(){
    srand((int) time(nullptr));
    Nothing nothing; nothing.func_in_class();
    func();
}