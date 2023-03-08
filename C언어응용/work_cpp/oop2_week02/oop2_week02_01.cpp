// 2주차 온라인 수업 코드 작성

# include <iostream>
using namespace std;

int main() {

	//// 자료형/ 음수표현 방식(2의 보수법)/ 자료형 Size
	//// 
	//// int k = 5;	// 변수 => 값 변경 가능
	//// const int k = 5;	// 상수(const) => 값 변경 X
	//// cout << k << endl;

	//const int i = 5;	// 32bit
	//cout << i << endl;
	//// short s = 65535;	// -1 출력	// 16bit (-2의 15승 ~ (+2의 15승 -1)
	//unsigned short s = 65535;
	//// signed (-2의 15승 ~ +2의 15승 -1)
	//// unsigned (0 ~ 2의 16승 -1) => 1111 1111 1111 1111
	//// 1111 1111 1111 1111 
	////+                  1
	////10000 0000 0000 0000	=> 0000 0000 0000 만 출력(16bit 니까)
	//cout << s << endl;

	// 배열
	//int arr[4];
	//arr[0] = -9;
	//arr[3] = 30000;

	//int arr[4] = { 0 };	// [0] ~ [3] : 0으로 초기화
	//arr[0] = -9;
	//arr[3] = 30000;

	int arr[4] = { -9, 0, 0, 30000 };

	for (int i = 0; i < 4; i++) {
		cout << arr[i] << endl;
	}
	// cout << arr[2] << endl;
		


	return 0;
}