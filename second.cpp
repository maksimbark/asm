#include <iostream>
using namespace std;

int main() {

	char a, b, c, d; //temp

	_asm {
		mov ah, 8;    //ah == 8
		mov bh, 6;    //bh == 6
		add ah, bh;   //ah == 14
		mov a, ah;    //a == ah == 14

		mov ah, 3;    //ah == 3
		mov bh, 2;    //bh == 2
		sub ah, bh;   //ah == 1
		mov b, ah;    //b == ah == 1

		mov ax, 12;   //ax == 12
		mov bh, 5;    //bh == 5
		div bh;       //al == 2
		mov c, al;    //c == al == 2

		mov ax, 15;   //ax == 15
		mov bh, 9;    //bh == 9
		div bh;       //al == 1
		mov d, al;    //d == al == 1

		mov ah, c;    //ah == c == 2
		mov bh, d;    //bh == d == 1
		add ah, bh;   //ah == 3
		mov c, ah;	  //c == ah == 3

		mov ah, 0     //ah == 0
		mov al, c;    //al == 3 => ax == 3
		mov bh, a;    //bh == 14
		div bh;       //al == 0
		mov a, al;    //a == al == 0

		mov ax, 13;   //ax == 13
		mov bh, 3;    //bh == 3
		div bh;       //al == 4
		mov c, al;    //c == al == 4

		mov ax, 2;    //ax == 2
		mov bh, 4;    //bh == 4
		div bh;       //al == 0
		mov d, al;    //c == al == 0

		mov ah, c;    //ah == c == 4
		mov bh, d;    //bh == d == 0
		add ah, bh;   //ah == 4
		mov c, ah;	  //c == ah == 4

		mov ah, 0     //ah == 0
		mov al, c;    //al == 4 => ax == 4
		mov bh, b;    //bh == 1
		div bh;       //al == 4
		
		mov ah, a;    //ah == 0
		add al, ah;   //a1 == 4
		mov a, al;    //a == 4

	}
	
	cout << int(a) << endl;

	return 0;
}
