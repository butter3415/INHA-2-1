#include <iostream>
using namespace std;

class Circle {
	private:
		double radius;
	public:
		double getRadius() const;
		double getArea() const;
		double getPerimeter() const;
		void setRadius(double value);
};

double Circle::getRadius() const {
	return radius;
}

double Circle::getArea() const {
	const double PI = 3.14;
	return (PI * radius * radius);
}

double Circle::getPerimeter() const {
	const double PI = 3.14;
	return (2 * PI * radius);
}

void Circle::setRadius(double r) {
	radius = r;
}

int main() {
	cout << "Circle1 ��ü ����" << endl;
	Circle circle1;
	circle1.setRadius(10.0);
	cout << "Circle1 ������ : " << circle1.getRadius() << endl;
	cout << "Circle1 ���� : " << circle1.getArea() << endl;
	cout << "Circle1 �ѷ� : " << circle1.getPerimeter() << endl;
	
	cout << endl;

	cout << "Circle2 ��ü ����" << endl;
	Circle circle2;
	circle2.setRadius(20.0);
	cout << "Circle2 ������ : " << circle2.getRadius() << endl;
	cout << "Circle2 ���� : " << circle2.getArea() << endl;
	cout << "Circle2 �ѷ� : " << circle2.getPerimeter() << endl;

	


}
