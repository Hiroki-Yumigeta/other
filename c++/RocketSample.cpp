//RocketSample.cpp
#include <iostream>
using namespace std;
/************************************以下クラス************************************/
class Rocket{         //改良版ロケット
    int nenryo;      //燃料
    int sokudo;      //現在の速度
public:
    Rocket(int x);   //コンストラクタ
	
    void kasoku();
};

Rocket::Rocket(int x) : nenryo(x), sokudo(0){} //コンストラクタの定義

void Rocket::kasoku(){ //加速を表す関数の定義
    if(nenryo >= 2){
        sokudo += 2;
        nenryo -= 2;
        cout<< "現在の燃料は" << nenryo << "です。" << endl;
        cout<< "現在の速度は" << sokudo << "です。" << endl;
    }
    else{
        cout << "燃料切れです。" <<endl;
    }
}
/************************************以下メイン************************************/
int main(){
    int n;
    cout << "ロケットをメモリ上につくります。燃料（整数）を入力してください。"<<endl;
    cin >> n; //nをコンストラクタに渡してロケットをつくります。
    Rocket ohtori(n); // nの値→Rocket(int x)のxにコピー →ohtori(n) = Rocket(n)
    cout<< "加速します。" <<endl;
    ohtori.kasoku(); //ohtoriに対してkasokuを使っています
    cout<< "また、加速します。" <<endl;
    ohtori.kasoku();
    cout<< "またまた、加速してみます。" <<endl;
    ohtori.kasoku();
    cout<< "鳳号の冒険は終わりました。" <<endl;
}