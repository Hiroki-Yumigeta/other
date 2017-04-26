#include <iostream.h>
#include <string.h>

class hito{//クラス宣言
	private:
		char name[40];
		int age;
	public:
		void setname(char* ss);//名前を設定するメンバ関数の宣言
		void setage(int tosi);//年齢を設定するメンバ関数の宣言
		void disp();//内容を出力するメンバ関数の宣言
};

void hito::setname(char* ss){//メンバ関数(setname)の定義
	strcpy(name,ss);
}

void hito::setage(int tosi){//メンバ関数(setage)の定義
	if(tosi<0) age=0;
	age=tosi;
}

void hito::disp(){//メンバ関数(disp)の定義
	cout << "名前：" << name << endl;
	cout << "年齢：" << age << endl;
}

void main(){
    hito yamada;
    yamada.setname("山田一郎");
    yamada.setage(30);
    yamada.disp();
}