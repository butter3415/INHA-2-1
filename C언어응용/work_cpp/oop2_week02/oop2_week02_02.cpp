#include <iostream>
using namespace std;

int main() {

	// auto (�Ѿ���� �� �߷��Ͽ� �ش� Ÿ������ ���۵ǵ��� ��)
	
	// auto f = 3.24f;		// float �ʱ�ȭ�� ���� �ڷ�Ÿ�� �߷�
	const auto f = 3.24f;	// const �� ����
	auto s = "test";	// string

	// f = 3.14f; // const �� �����ؼ� ���� �Ұ�

	cout << f << endl;
	cout << s << endl;


}