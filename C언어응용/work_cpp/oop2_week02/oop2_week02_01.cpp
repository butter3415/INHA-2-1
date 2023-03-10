// 2주차 온라인 수업 코드 작성 - 재작성

# include <iostream>
using namespace std;

int main() {

	// 자료형/ 음수표현방식(2의 보수법)/ 자료형의 SIZE

	// int i = 5; => 변수
	const int i = 5; // => 상수	// 32 bit
	// i = 7; => 변경 불가
	cout << i << endl;

	// short s = 65535;	// 16bit (-2의 15승 ~ +2의 15승 - 1) 
	// 절반은 음수로 사용하여 65535 출력 불가.
	
	unsigned short s = 65535; // => 65535 출력 가능
	
	// signed(-2의 15승 ~ +2의 15승 -1) 음수 ~ 양수
	// unsigned(0 ~ 2의 16승 -1) 0 ~ 양수
	// 
	//  1111 1111 1111 1111
	//+                   1
	// 10000 0000 0000 0000

	cout << s << endl;	// -1 출력






		


	return 0;
}