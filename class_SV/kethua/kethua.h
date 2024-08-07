#include<iostream>
#include<iomanip>
#include<string>
#include<math.h>

using namespace std;

class kethua
{
private:
	string name, address;
	int tuoi;
public:
	kethua()
	{
		this->name = "";
		this->address = "";
		this->tuoi = 0;
	}

	void set()
	{
		cout << "nhap thong tin: " << "\n";
		cout << "nhap name: "; 
		getline(cin, this->name);
		cout << "nhap address: ";
		getline(cin, this->address);
		cout << "nhap tuoi: ";
		cin >> tuoi;
		cin.ignore();
	}

	void get()
	{
		cout << "output:" << "\n";
		cout << "Name: " << this->name << "\n";
		cout << "address: " << this->address << "\n";
		cout << "tuoi: " << this->tuoi << "\n";
		cout << endl;
	}

};

