#include "algorithm_test.h"
#include<istream>
#include<iomanip>
#include<string>
#include<array>
#include<vector>
#include<iomanip>
#include<math.h>

using namespace std;

void sortarr::swap(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void sortarr::show_arr(vector<int>& arr)
{
	cout << "arr: ";
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

// interchange sort
void sortarr::interchange_sort(vector<int>& arr)
{
	int length = arr.size();
	for (int i = 0; i < length - 1; i++)
	{
		for (int j = i +1; j < length; j++)
		{
			if (arr[i] > arr[j])
			{
				sortarr::swap(arr[i], arr[j]);
			}
		}
	}
}


// budble sort
void sortarr::buble_sort(vector<int>& arr)
{
	size_t length = arr.size();
	for (int i = 1; i < length; i++)
	{
		for (int j = i -1; j < length -1; j++)
		{
			if (arr[j] > arr[j+1])
			{
				sortarr::swap(arr[j], arr[j + 1]);
			}
		}
	}
}

// insertion sort
void sortarr::insersort(vector<int>& arr)
{
	int x, pos;
	size_t length = arr.size();
	for (size_t i = 1; i < length; i++)
	{
		x = arr[i];
		pos = i;
		while (pos !=0 && x < arr[pos -1])
		{
			arr[pos] = arr[pos - 1];
			pos--;
			arr[pos] = x;
		}
	}
}

// selection sort

void sortarr::selection_sort(vector<int>& arr)
{
	int lenght = arr.size();
	for (int i = 0; i < lenght -1; i++)
	{
		int min = i;
		for (int j = i + 1; j < lenght; j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}
		if (i != min)
		{
			sortarr::swap(arr[i], arr[min]);
		}

	}
}

// quick Sort
void sortarr::quick_sort(vector<int>& arr , int low, int high)
{
	int l = low, r = high;
	// chon phan tu chot: phan tu ow giua mang.
	int tb = (l + r) / 2;
	// quick Sort: chia thanh tung mang nho va hon hon arr[tb] va arrange.
	while (l < r)
	{
		// find the element have arr[element] > arr[tb] to swap.
		// from begin = l.
		while (arr[tb] > arr[l])
		{
			l++;
		}
		// find the element have arr[element] < arr[tb] to swap.
		// from the end = r.
		while (arr[tb] < arr[r])
		{
			r--;
		}
		// swap if l < r because l from begin() and r from end().
		if (l <= r)
		{
			sortarr::swap(arr[l], arr[r]);
			l++;
			r--;
		}
	}
	// continue arrange the array after arranged the arr to sides.
	if (l < high)
	{
		sortarr::quick_sort(arr, l, high);
	}
	if (r > low)
	{
		sortarr::quick_sort(arr, low, r);
	}
}

bool KTtamgiac(tamgiac test)
{
	
}

int main()
{
	sortarr s1;
	vector<int> arr = { 12,2,8,5,1,6,4,15 ,90,43,13,51};
	//s1.buble_sort(arr);
	//s1.insersort(arr);
	//s1.selection_sort(arr);
	s1.quick_sort(arr,0, 11);
	s1.show_arr(arr);
}