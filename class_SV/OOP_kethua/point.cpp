#include "point.h"
#include<iostream>
#include<string>
#include<iomanip>
#include<vector>
#include<math.h>

using namespace std;

point::point()
{
	this->x = 0;
	this->y = 0;
}

point::point(int& a, int& b)
{
	this->x = a;
	this->y = b;
}

point::~point()
{
	x = y = 0;
}

void point::nhap()
{
	cout << "nhap x: ";
	cin >> x;
	cout << "nhap y: ";
	cin >> y;
}

void point::output()
{
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
}

//istream& operator >>(istream& is, point& obj)
//{
//	cout << "nhap x: ";
//	is >> obj.x;
//	cout << "nhap y: ";
//	is >> obj.y;
//	return is;
//}

//ostream& operator << (ostream& os, point& obj)
//{
//	os << "x = " << obj.x << endl;
//	os << "y = " << obj.y << endl;
//	return os;
//}

bool point::cheochinh(point& obj)
{
	if (obj.x == obj.y)
	{
		return true;
	}
	else
	{
		return false;
	}
}