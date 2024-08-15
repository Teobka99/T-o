#include<iostream>
#include<string>
#include<math.h>
#include<iomanip>
#include<vector>
#include"color.h"
#include"point.h"

class Pixel : public color, public point
{
public:
	Pixel();
	Pixel(int &a, int &b, string& pixelmausac, string&pixelmamau);
	~Pixel();
	void nhap();
	void xuat();
	bool check(point & obj1);
};


