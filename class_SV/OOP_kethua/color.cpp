#include<iostream>
#include<string>
#include<array>
#include<iomanip>
#include<vector>
#include<math.h>
#include"color.h"

using namespace std;

color::color()
{
	this->mausac = "";
	this->mamau = "";
}

color::color(string& mausac, string& mamau)
{
	this->mausac = mausac;
	this->mamau = mamau;
}

color::~color()
{
	mausac = mamau = "";
}
void color::nhap()
{
	cout << "nhap mau sac: ";
	cin.ignore();
	getline(cin, mausac);
	cout << "nhap ma mau: ";
	cin.ignore();
	getline(cin, mamau);
}

void color::output()
{
	cout << "mau: " << mausac << endl;
	cout <<"ma: " << mamau << endl;
}

//istream& operator >>(istream& is, color& obj)
//{
//	cout << "nhap mau: ";
//	cin.ignore();
//	getline(is, obj.mausac);
//	cout << "nhap ma mau: ";
//	cin.ignore();
//	getline(is, obj.mamau);
//	return is;
//}

//ostream& operator <<(ostream& os, color& obj)
//{
//	os << obj.mausac << endl;
//	os << obj.mamau << endl;
//	return os;
//}

string color::gettenmau()
{
	return this->mausac;
}


