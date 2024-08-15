#include "Pixel.h"
#include"color.h"
#include"point.h"
#include<iostream>
#include<string>
#include<math.h>
#include<iomanip>
#include<vector>

using namespace std;

Pixel::Pixel()
{
	this->mausac = "";
	this->mamau = "";
	x = y = 0;
}

Pixel::Pixel(int&a, int&b, string& pixelmausac, string& pixelmamau)
{
	this->x = a;
	this->y = b;
	this->mausac = pixelmausac;
	this->mamau = pixelmamau;
}

Pixel::~Pixel()
{
	color::~color();
	point::~point();
}

void Pixel::nhap()
{
	color::nhap();
	point::nhap();
}

void Pixel::xuat()
{
	color::output();
	point::output();
}

bool Pixel::check(point& obj1)
{
	point::cheochinh(obj1);
}