// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class CFeet
{
public:
	CFeet();
	~CFeet();
	void display();
	void conversion(double a, double b);
	CFeet operator +(CFeet & ojbk);


private:
	int feet;
	double inch;

};

CFeet::CFeet()
{
}

CFeet::~CFeet()
{
}

void CFeet::display()
{
	cout << feet << "  " << inch << endl;
}

void CFeet::conversion(double a, double b)
{
	feet = a + b / 12;
	inch = ((a + b / 12) - feet) * 12;
}

CFeet CFeet::operator+(CFeet & ojbk)
{
	CFeet add;
	add.conversion(feet + ojbk.feet, inch + ojbk.inch);
	return add;
}


int main()
{
	CFeet A, B, C;
	cout << "输入英尺英寸" << endl;
	double feet, inch;
	cin >> feet >> inch;
	A.conversion(feet, inch);
	cout << "输入英尺英寸" << endl;
	cin >> feet >> inch;
	B.conversion(feet, inch);
	C = A + B;
	C.display();
	return 0;
}

