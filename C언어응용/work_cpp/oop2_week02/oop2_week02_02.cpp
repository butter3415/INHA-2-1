#include <iostream>
using namespace std;

int main() {

	// auto (넘어오는 값 추론하여 해당 타입으로 동작되도록 함)
	
	// auto f = 3.24f;		// float 초기화값 통해 자료타입 추론
	const auto f = 3.24f;	// const 로 선언
	auto s = "test";	// string

	// f = 3.14f; // const 로 선언해서 변경 불가

	cout << f << endl;
	cout << s << endl;


}