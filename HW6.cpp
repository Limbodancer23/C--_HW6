#include <iostream>
#include <cmath>
class MyClass
{
public:
	MyClass(int x, int y);
	int GetX();
	int GetY();
	void CalcVector();
private:
	int m_x, m_y;
};

MyClass::MyClass(int x, int y)
{
	m_x = x;
	m_y = y;
}

int MyClass::GetX() {
	return this->m_x;
}

int MyClass::GetY() {
	return this->m_y;
}

void MyClass::CalcVector() {
	std::cout << sqrt(pow(m_x, 2) + pow(m_y, 2)) << std::endl;
}

int main()
{
	MyClass c1(10, 10);
	c1.CalcVector();
}
