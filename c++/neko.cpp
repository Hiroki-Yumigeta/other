//neko.cpp
#include <iostream>
#include <string>
using namespace std;

class Neko{
private:
    string name;
public:
    Neko(string s){//Neko() = Neko = dora() �� �ustring s�v= �u�{�X�v
        name = s;
    }
    void naku(){
        cout<<"�ɂႠ�B���l��"<<name<<"���B"<<endl;
    }
};

/************************************�ȉ����C��************************************/
int main(){
    Neko dora("�{�X");  //Neko�̃I�u�W�F�N�g����������Adora�ŕ\�킳���悤�ɂȂ�B
    cout<<"���Ȃ��̖��Â����L����������ɐ�������܂����B"<<endl;
    cout<<"<�L�����܂��B>"<<endl;
	cout<<"(�ȉ��uNeko�v�ɔ��)"<<endl;
    dora.naku();
}