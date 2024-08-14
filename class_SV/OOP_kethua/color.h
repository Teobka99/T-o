#include<iostream>
#include<string>
#include<array>
#include<iomanip>
#include<math.h>
#include<vector>

using namespace std;

class color
{
protected:
	string mausac;
	string mamau;
public:
	color();
	color(string& mausac, string& mamau);
	~color();
	friend istream &operator >> (istream& is, color &obj);
	friend ostream& operator << (ostream& os, color& obj);
	string gettenmau();
};

