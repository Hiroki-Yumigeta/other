//RocketSample.cpp
#include <iostream>
using namespace std;
/************************************�ȉ��N���X************************************/
class Rocket{         //���ǔŃ��P�b�g
    int nenryo;      //�R��
    int sokudo;      //���݂̑��x
public:
    Rocket(int x);   //�R���X�g���N�^
	
    void kasoku();
};

Rocket::Rocket(int x) : nenryo(x), sokudo(0){} //�R���X�g���N�^�̒�`

void Rocket::kasoku(){ //������\���֐��̒�`
    if(nenryo >= 2){
        sokudo += 2;
        nenryo -= 2;
        cout<< "���݂̔R����" << nenryo << "�ł��B" << endl;
        cout<< "���݂̑��x��" << sokudo << "�ł��B" << endl;
    }
    else{
        cout << "�R���؂�ł��B" <<endl;
    }
}
/************************************�ȉ����C��************************************/
int main(){
    int n;
    cout << "���P�b�g����������ɂ���܂��B�R���i�����j����͂��Ă��������B"<<endl;
    cin >> n; //n���R���X�g���N�^�ɓn���ă��P�b�g������܂��B
    Rocket ohtori(n); // n�̒l��Rocket(int x)��x�ɃR�s�[ ��ohtori(n) = Rocket(n)
    cout<< "�������܂��B" <<endl;
    ohtori.kasoku(); //ohtori�ɑ΂���kasoku���g���Ă��܂�
    cout<< "�܂��A�������܂��B" <<endl;
    ohtori.kasoku();
    cout<< "�܂��܂��A�������Ă݂܂��B" <<endl;
    ohtori.kasoku();
    cout<< "�P���̖`���͏I���܂����B" <<endl;
}