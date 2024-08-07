#include<iostream>
#include<string>
#include"class.h"
#include<iomanip>

using namespace std;

vector<person> save;

person::person()
{
	this->pid = 0;
	this->age = 0;
	this->ho = "";
	this->dem = "";
	this->ten = "";
	this->gioitinh = "";
	this->address = "";
	this->phone = "";
}

int person::id = 1;

person::person(int id, int age, string ho, string dem, string ten, string gioitinh, string add, string phone) {
	setid(id);
	setage(age);
	setho(ho);
	setdem(dem);
	setten(ten);
	setgioitinh(gioitinh);
	setaddress(add);
	setphone(phone);
}

void person::setid(int id) 
{
	this->pid = (id >= 1) ? id : person::id++;
}

void person::setage(int age)
{
	this->age = (age >= 0) ? age : 0;
}

void person::setho(string ho)
{
	this->ho = ho;
}

void person::setdem(string dem)
{
	this->dem = dem;
}

void person::setten(string ten)
{
	this->ten = ten;
}

void person::setgioitinh(string gioitinh)
{
	this->gioitinh = gioitinh;
}

void person::setaddress(string add)
{
	this->address = add;
}

void person::setphone(string phone)
{
	this->phone = phone;
}

int person::getid()
{
	return this->pid;
}

int person::getage()
{
	return this->age;
}

string person::getho()
{
	return this->ho;
}

string person::getdem()
{
	return this->dem;
}

string person::getten()
{
	return this->ten;
}

string person::getgioitinh()
{
	return this->gioitinh;
}

string person::getaddress()
{
	return this->address;
}

string person::getphone()
{
	return this->phone;
}

void person::show()
{
	cout << "=================================\n";
	cout << "Thong tin: \n";
	cout << setw(5) << "id" ;
	cout << setw(10) << "Ho";
	cout << setw(10) << "dem";
	cout << setw(10) << "ten";
	cout << setw(10) << "tuoi";
	cout << setw(15) << "gioi tinh";
	cout << setw(20) << "address";
	cout << setw(20) << "phone" << "\n";
	cout << setw(5) << getid();
	cout << setw(10) << getho();
	cout << setw(10) << getdem();
	cout << setw(10) << getten();
	cout << setw(10) << getage();
	cout << setw(15) << getgioitinh();
	cout << setw(20) << getaddress();
	cout << setw(20) << getphone();
}
