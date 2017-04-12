#include <iostream>
using namespace std;

int main() {

	string cat = "kitten";
	char find = 'i';
	char fix = '*';

	_asm{
		mov eax, 0;
		mov ch, find;
		mov cl, fix;
start:
		mov bh, cat[eax];
		cmp bh, ch;
		je fixq
		add eax, 1;
		jne start

fixq:
		mov cat[eax], cl;

	}

	//cout << cat << endl;
	return 0;
}
