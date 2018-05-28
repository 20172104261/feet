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
	CFeet operator +(CFeet & oj);
	CFeet operator-(CFeet & ojj);
	double conversionf(double a, double b);
private:
	int feet;
	double inch;
	double feet1;

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
	feet1 = a + b / 12;
	inch = (feet1 - feet) * 12;
}

CFeet CFeet::operator+(CFeet & oj)
{
	CFeet add;
	add.conversion(feet + oj.feet, inch + oj.inch);
	return add;
}

double CFeet::conversionf(double a, double b)
{
	feet1 = (a + b / 100)*3.2808399;
	return feet1;
}

CFeet CFeet::operator-(CFeet & ojj)
{
	CFeet add;
	int feet11;
	feet11 = feet1 - ojj.feet1;
	feet = feet11;
	inch = (feet11 - feet) * 12;
	return add;
}

int main()
{
	CFeet A, B, C,D,E;
	double feet, inch;
	double menter, cenjimeter;
	cout << "输入英尺英寸" << endl;
	cin >> feet >> inch;
	A.conversion(feet, inch);
	cout << "输入英尺英寸" << endl;
	cin >> feet >> inch;
	B.conversion(feet, inch);
	C = A + B;
	C.display();
	cout << "输入米毫米" << endl;
	cin >> menter >> cenjimeter;
	feet = D.conversionf(menter, cenjimeter);
	D.conversion(feet,0);
	D.display();
	E = C - D;
	E.display();
	return 0;
}

