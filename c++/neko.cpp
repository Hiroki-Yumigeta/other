//neko.cpp
#include <iostream>
#include <string>
using namespace std;

class Neko{
private:
    string name;
public:
    Neko(string s){//Neko() = Neko = dora() → 「string s」= 「ボス」
        name = s;
    }
    void naku(){
        cout<<"にゃあ。俺様は"<<name<<"だ。"<<endl;
    }
};

/************************************以下メイン************************************/
int main(){
    Neko dora("ボス");  //Nekoのオブジェクトが生成され、doraで表わされるようになる。
    cout<<"あなたの名づけた猫がメモリ上に生成されました。"<<endl;
    cout<<"<猫が鳴きます。>"<<endl;
	cout<<"(以下「Neko」に飛ぶ)"<<endl;
    dora.naku();
}