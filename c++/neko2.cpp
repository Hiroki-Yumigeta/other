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

/************************************�ȉ����C��************************************/
int main(){
    string  s;
    cout << "�ǂ�L�𐶐����܂��B���O����͂��Ă��������B" << endl;
    cin >> s;
    Neko dora(s);
    cout << "���Ȃ��̖��Â����L����������ɐ�������܂����B" << endl;
    cout << "<�L�����܂��B>" << endl;
    dora.naku();
}