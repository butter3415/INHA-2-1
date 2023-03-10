#include <iostream>
using namespace std;

int main() {
	// Modern school code
	char letters[] = "Hello";
	void* ps;
	ps = letters;

	// Ranged based for loop	 범위 기반 코드 
	for (auto letter : letters) {	// auto i : 배열
		cout << letter;
	}

	/* ↓ 파이썬 코드와 동일 (Modern)↓
	for i in range(0, 3, 1):
		print(subjects[i])
	*/


	// Old school code
	char s[] = { 'H', 'e','l','l','o', 0 };
	void* ps;
	ps = &s[0];

	for (int i = 0; i < sizeof(s); i++) {
		cout << *((char*)ps + i);

	}

	/* ↓ 파이썬 코드와 동일 (Old)↓
	for i in range(0, 3, 1):
	    print(subjects[i])
	*/









	return 0;
}