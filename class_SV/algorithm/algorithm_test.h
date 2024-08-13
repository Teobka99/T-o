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
	void swap(int& a, int& b);
	void interchange_sort(vector<int>& arr);
	void buble_sort(vector<int>& arr);
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
};
