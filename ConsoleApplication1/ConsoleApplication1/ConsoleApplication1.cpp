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
	void conversionf(double a, double b);
private:
	double inch;
	double feet;
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
	feet = (int)((a * 12 + b) / 12);
	inch = (((a * 12 + b )/ 12) - feet)*12;
	cout << feet << "  " << inch << endl;
}

CFeet CFeet::operator+(CFeet & oj)
{
	CFeet add;
	add.conversion(feet + oj.feet, inch + oj.inch);
	return add;
}

void CFeet::conversionf(double a, double b)
{
	feet = (int)((a + b / 100)*3.2808399);
	inch = ((a + b / 100)*3.2808399 - feet)*12;

}

CFeet CFeet::operator-(CFeet & ojj)
{
	CFeet add;
	add.conversion(feet - ojj.feet, inch - ojj.inch);
	return add;
}

int main()
{
	CFeet A, B, C, D, E;
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
	D.conversionf(menter, cenjimeter);
	D.display();
	E = C - D;
	E.display();
	return 0;
}

