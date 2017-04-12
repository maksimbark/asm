#include <iostream>
using namespace std;

int main() {
	int a = 4, x = 16, y;
	_asm {
		mov eax, a;	   //eax == a
		mov ebx, x;	   //ebx == x
		cmp ebx, eax; //cmp == cbx-eax
		jg go1 //Условие больше
		jle go2 //Условие меньше или равно

	go1:
		add eax, ebx; //eax == eax + ebx
		mov y, eax; 
		jmp q

	go2:
		add eax, eax; //eax == 2 eax
		sub eax, ebx; //eax == eax = ebx
		mov y, eax;

		q: //end
	}

	cout << y << endl;
	return 0;
}
