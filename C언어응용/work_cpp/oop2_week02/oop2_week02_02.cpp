#include <iostream>
using namespace std;

int main() {

	// auto (넘어오는 값 추론하여 해당 타입으로 동작되도록 함)
	
	// auto f = 3.24f;		// float 초기화값 통해 자료타입 추론
	//const auto f = 3.24f;	// const 선언 ☆ auto와 const 함께 사용 가능
	
	//const auto f = 3.24f; // float으로 처리 (4바이트)
	const auto f = 3.24;	// double 로 처리 (8바이트)
	auto s = "test";	// string	// char 포인터로 처리


	// f = 3.14f; // const 로 선언해서 변경 불가

	cout << sizeof(f) << "\t" << typeid(f).name() << endl;	// 4       float
	cout << sizeof(s) << "\t" << typeid(s).name() << endl;	// 8       char const* __ptr64	
	// s => character형 포인터로 동작(4바이트)	// ! 난 왜 8바이트?!?!? ! 

	cout << f << endl;
	cout << s << endl;


}