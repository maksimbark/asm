#include <iostream>
using namespace std;

int main() {

	string my = "abcde";

	char find = 'c';
	char now;
	int y = -1;

	for (int i = 0; i < my.length(); i++) {
		now = my[i];
		_asm {
			mov bl, now;    // bl == now
			mov bh, find;   // nh == find
			cmp bl, bh; cmp //bl-bh
				je ok // if ==
				jne q // else
				ok :
			mov y, 0; // y == 0, flag

		q:

		}
		if (y == 0) {
			cout << i+1 << endl;
			break;
		}
	}
	
		return 0;
	}
