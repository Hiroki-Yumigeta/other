#include <iostream.h>
#include <string.h>

class hito{//�N���X�錾
	private:
		char name[40];
		int age;
	public:
		void setname(char* ss);//���O��ݒ肷�郁���o�֐��̐錾
		void setage(int tosi);//�N���ݒ肷�郁���o�֐��̐錾
		void disp();//���e���o�͂��郁���o�֐��̐錾
};

void hito::setname(char* ss){//�����o�֐�(setname)�̒�`
	strcpy(name,ss);
}

void hito::setage(int tosi){//�����o�֐�(setage)�̒�`
	if(tosi<0) age=0;
	age=tosi;
}

void hito::disp(){//�����o�֐�(disp)�̒�`
	cout << "���O�F" << name << endl;
	cout << "�N��F" << age << endl;
}

void main(){
    hito yamada;
    yamada.setname("�R�c��Y");
    yamada.setage(30);
    yamada.disp();
}