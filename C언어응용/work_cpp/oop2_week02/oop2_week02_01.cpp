// 2���� �¶��� ���� �ڵ� �ۼ�

# include <iostream>
using namespace std;

int main() {

	//// �ڷ���/ ����ǥ�� ���(2�� ������)/ �ڷ��� Size
	//// 
	//// int k = 5;	// ���� => �� ���� ����
	//// const int k = 5;	// ���(const) => �� ���� X
	//// cout << k << endl;

	//const int i = 5;	// 32bit
	//cout << i << endl;
	//// short s = 65535;	// -1 ���	// 16bit (-2�� 15�� ~ (+2�� 15�� -1)
	//unsigned short s = 65535;
	//// signed (-2�� 15�� ~ +2�� 15�� -1)
	//// unsigned (0 ~ 2�� 16�� -1) => 1111 1111 1111 1111
	//// 1111 1111 1111 1111 
	////+                  1
	////10000 0000 0000 0000	=> 0000 0000 0000 �� ���(16bit �ϱ�)
	//cout << s << endl;

	// �迭
	//int arr[4];
	//arr[0] = -9;
	//arr[3] = 30000;

	//int arr[4] = { 0 };	// [0] ~ [3] : 0���� �ʱ�ȭ
	//arr[0] = -9;
	//arr[3] = 30000;

	int arr[4] = { -9, 0, 0, 30000 };

	for (int i = 0; i < 4; i++) {
		cout << arr[i] << endl;
	}
	// cout << arr[2] << endl;
		


	return 0;
}