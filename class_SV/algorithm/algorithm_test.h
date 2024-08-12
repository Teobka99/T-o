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

