//neko3.cpp
#include <iostream>
#include <string>
using namespace std;

class Neko
{
    string name;
public:
    Neko(string s);
    void naku() const;
};


void Neko::naku() const{
    cout<<"�ɂႠ�B���l��"<<name<<"���B"<<endl;
}

/**********************************************************************************/
void Neko::naku() const{
    cout<<"�ɂႠ�B���l��"<<name<<"���B"<<endl;
}
/************************************�ȉ����C��************************************/
int main(){
    string s;
    cout<<"�L�𐶐����܂��B���O����͂��Ă��������F";
    cin>>s;

    Neko dora(s);  //�R���X�g���N�^�����s����A������s�̖��O��dora�����������
    cout<<"���Ȃ��̖��Â����L����������ɐ�������܂����B"<<endl;
    cout<<"�L�����܂��B"<<endl;

    dora.naku();   //dora�ɑ΂���naku�����s
}