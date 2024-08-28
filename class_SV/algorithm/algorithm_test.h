#include<iostream>
#include<string>
#include<array>
#include<vector>
#include<iomanip>
#include<random>

using namespace std;

class sortarr
{
public:
	void option();
	void swap(int& a, int& b);
	void interchange_sort(vector<int>& arr);
	void bubble_sort(vector<int>& arr);
	void insersort(vector<int>& arr);
	void selection_sort(vector<int>& arr);
	void quick_sort(vector<int>& arr, int low, int high);
	void show_arr(vector<int> &arr);
};

class tamgiac
{
private:
	int a, b, c;
public:
	tamgiac()
	{
		a = 1;
		b = 1;
		c = 1;
	};
	// function gan x , y, z to a,b,c.
	tamgiac(int x, int y, int z) : a(x), b(y), c(z)
	{}

	friend bool KTtamgiac(tamgiac test);

	friend ostream& operator << (ostream& os, tamgiac test)
	{
		os << "a = " << test.a << "\n" << "b = " << test.b << "\n" << "c = " << test.c << endl;
		return os;
	}
};

class find_algorithm
{
public:
	void binary_search(vector<int> arr);
	void linear_search(vector<int> arr);
	void jump_search(vector<int> arr);
};
