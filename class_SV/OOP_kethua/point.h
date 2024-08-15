#include<iostream>
#include<string>
#include<iomanip>
#include<vector>
#include<math.h>

using namespace std;

class point
{
protected:
	int x, y;
public:
	point();
	point(int& a, int& b);
	~point();
	void nhap();
	void output();
	//friend istream& operator >> (istream& is, point& obj);
	//friend ostream& operator << (ostream& os, point& obj);
	bool cheochinh(point& obj);
};

