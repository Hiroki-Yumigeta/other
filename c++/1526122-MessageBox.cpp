//実行→コンパイル時パラメータ(Y)→コンパイル時パラメータ(C)→「-W」と入力
#include<windows.h>
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int){
	MessageBox(NULL,"メッセージ","タイトル",MB_OK);
	return 0;
}