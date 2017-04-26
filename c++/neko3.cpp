//neko3.cpp
#include <iostream>
#include <string>
using namespace std;

class Neko{
//private←なくてもいい
    string name;
public:
    Neko(string s);
    void naku() const;
};

Neko::Neko(string s) : name(s){}
/**********************************************************************************/
void Neko::naku() const{
    cout<<"にゃあ。俺様は"<<name<<"だ。"<<endl;
}
/************************************以下メイン************************************/
int main(){
    string s;
    cout<<"猫を生成します。名前を入力してください：";
    cin>>s;

    Neko dora(s);  //コンストラクタが実行され、文字列sの名前のdoraが生成される
    cout<<"あなたの名づけた猫がメモリ上に生成されました。"<<endl;
    cout<<"猫が鳴きます。"<<endl;

    dora.naku();   //doraに対してnakuを実行
}