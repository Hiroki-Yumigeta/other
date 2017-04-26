//neko.cpp
#include <iostream>
#include <string>
using namespace std;

class Neko{
private:
    string name;
public:
    Neko(string s){
        name = s;
    }
    void naku(){
        cout<<"にゃあ。俺様は"<<name<<"だ。"<<endl;
    }
};

int main(){
    Neko dora1("ボス");
    Neko dora2("タマ");
    Neko dora3("トラ");
    cout<<"あなたの名づけた猫がメモリ上に生成されました。"<<endl;
    cout<<"<猫が鳴きます。>"<<endl;
	cout<<"(以下「Neko」に飛ぶ)"<<endl;
    dora1.naku();
    dora2.naku();
    dora3.naku();
}