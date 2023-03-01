#include <iostream>	
using namespace std;	


int main() { 
	int number;
	bool isPrime = true;	// 약수 발생 시 false

	cin >> number;	// Scanner sc = new Scanner(System.in); int number = sc.nextInt();
	
	// cout << number << endl;

	if (number < 1) {
		isPrime = false;
	}
	else {
		for (int i = 2; i < number; i++) {
			if (number % i == 0) {
				isPrime = false;
				break;	// for구문 탈출
			}
		}
	}

	if (isPrime == true) {
		cout << number << " is prime number." << endl;	// System.out.println("~~~");
	}
	else {
		cout << number << " is NOT prime number." << endl;
	}

	// return 0;
}
