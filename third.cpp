#include <iostream>
using namespace std;

int main() {

	char a, b;

	//Великолепные костыли, но это ассемблер, так что почему нет
	char p1, p2, p3, p4, p5, p6, p7, p8;

	_asm {
		mov ah, 101b;   //ah == 5;
		sal ah, 4;     //ah == 80;
		mov a, ah;	  //a == ah == 80;
		//далее присваиваем по обному биту в переменные на своих местах
		shr ah, 7;    // ah == 0
		and ah, 1b;  // 0 and 1 == 0
		mov p1, ah; // p1 == ah

		mov ah, a;     // a == ah == 80, восстанавливаем значение ah
		shr ah, 5;    // ah == 10b
		and ah, 10b; // 10b and 10b == 10b
		mov p2, ah; // p2 == ah == 10b
		//etc
		mov ah, a;
		shr ah, 3;
		and ah, 100b;
		mov p3, ah;

		mov ah, a;
		shr ah, 1;
		and ah, 1000b;
		mov p4, ah;

		mov ah, a;
		shl ah, 1;
		and ah, 10000b;
		mov p5, ah;

		mov ah, a;
		shl ah, 3;
		and ah, 100000b;
		mov p6, ah;

		mov ah, a;
		shl ah, 5;
		and ah, 1000000b;
		mov p7, ah;

		mov ah, a;
		shl ah, 7;
		and ah, 10000000b;
		mov p8, ah;
		//складываем всё
		mov ah, 0; // ah == 0
		add ah, p1; // ah += p1
		add ah, p2; // ah += p2
		add ah, p3; // etc
		add ah, p4;
		add ah, p5;
		add ah, p6;
		add ah, p7;
		add ah, p8;
		
		mov b, ah; // ah == b == 10 
	}
	//01010000
	//00001010
	cout << int(a) << " " << int(b);
	return 0;
}
