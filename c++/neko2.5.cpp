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
        cout<<"�ɂႠ�B���l��"<<name<<"���B"<<endl;
    }
};

int main(){
    Neko dora1("�{�X");
    Neko dora2("�^�}");
    Neko dora3("�g��");
    cout<<"���Ȃ��̖��Â����L����������ɐ�������܂����B"<<endl;
    cout<<"<�L�����܂��B>"<<endl;
	cout<<"(�ȉ��uNeko�v�ɔ��)"<<endl;
    dora1.naku();
    dora2.naku();
    dora3.naku();
}