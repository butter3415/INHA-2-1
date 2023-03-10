#include <iostream>
using namespace std;

int main() {
	// Modern school code
	char letters[] = "Hello";
	void* ps;
	ps = letters;

	// Ranged based for loop	 ���� ��� for �� 
	for (auto letter : letters) {	// auto i : �迭
		cout << letter;
	}

	/* �� ���̽� �ڵ�� ���� (Modern)��
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

	/* �� ���̽� �ڵ�� ���� (Old)��
	for i in range(0, 3, 1):
	    print(subjects[i])
	*/

	for (int i : {1, 3, 5, 7, -9})
		cout << i << " ";







	return 0;
}