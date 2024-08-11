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
			if (arr[j] < arr[i])
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
void sortarr::quick_sort(vector<int>& arr)
{

}
int main()
{
	sortarr s1;
	vector<int> arr = { 1,5,7,9,24,59,24,148,15156,1416,6214242,1414 };
	//s1.buble_sort(arr);
	//s1.insersort(arr);
	s1.selection_sort(arr);
	s1.show_arr(arr);
}