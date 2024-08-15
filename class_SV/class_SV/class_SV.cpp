#include <iostream>
#include<string>
#include<iomanip>
#include<cmath>
#include"class.h"
#include<vector>

using namespace std;

void nhapthongtin(person * arr)
{
	person s1;
	s1.getid();
	int age;
	string ho, dem, ten, gioitinh, add, phone;
	cout << "nhap ho: "; getline(cin, ho);
	cout << "nhap dem: "; getline(cin, dem);
	cout << "nhap ten: "; getline(cin, ten);
	cout << "nhap gioi tinh: "; getline(cin, gioitinh);
	cout << "nhap address: "; getline(cin, add);
	cout << "nhap phone: "; getline(cin, phone);
	cout << "nhap age: "; cin >> age;
	person p(0, age, ho, dem, ten, gioitinh, add, phone);
	arr[s1.getid()] = p;
}
int main()
{
	int n;
	cin >> n;
	person s1;
	person* arr = new person[n];
	nhapthongtin(arr);
	s1.show();
}

