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
void sortarr::bubble_sort(vector<int>& arr)
{
	size_t length = arr.size();
	for (int i = 0; i < length - 1; i++)
	{
		for (int j = 0; j < length- 1 -i; j++)
		{
			if (arr[j] > arr[j+ 1])
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
	if (test.a !=0 && test.b != 0 && test.c != 0 && (test.a + test.b) > test.c && (test.a + test.c) > test.b && (test.b + test.c) > test.a)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void find_algorithm::binary_search(vector<int> arr)
{
	int x;
	cout << "nhap gia tri tim kiem x: ";
	cin >> x;
	// must arrange the array before search.
	int n = arr.size();
	int TB = n / 2;
	if (arr[TB] > x)
	{
		for (int i = 0; i < TB; i++)
		{
			if (arr[i] == x)
			{
				cout <<"vi tri cua x trong mang: " << i;
			}
		}
	}
	if (arr[TB] == x)
	{
		cout << "vij tri cua x trong mang:	" << TB;
	}
	if(arr[TB] < x)
	{
		for (int i = TB +1; i < n; i++)
		{
			if (arr[i] == x)
			{
				cout << "vi tri cua x trong mang: " << i;
			}
		}
	}
}

void find_algorithm::linear_search(vector<int> arr)
{
	int x;
	int length = arr.size();
	cout << "nhap gia tri can tim x:";
	cin >> x;
	for (int i = 0; i < length; i++)
	{
		if (arr[i] == x)
		{
			cout << "location of x in array: " << i << endl;
		}
	}
}

void find_algorithm::jump_search(vector<int> arr)
{
	int x;
	cout << "nhap gia tri can search: ";
	cin >> x;
	int n = arr.size();
	int j = sqrt(n);
	cout <<"jump = " << j << endl;
	int start = 0;
	int next = j;
	while (start < n -1 && arr[next - 1] < x )
	{
		start = next;
		next = next + j;
		if (next >= (n -1))
		{
			next = n - 1;
		}
	}
	for (int i = start; i < next; i++)
	{
		if (arr[i] == x)
		{
			cout << "the location of x in array is: " << i << endl;
		}
	}

}

void sortarr::option()
{
	cout << "==============MENU=============" << endl;
	cout << "1: interchangesort." << endl;
	cout << "2: bubble_sort." << endl;
	cout << "3: insertion_sort" << endl;
	cout << "4: selection_sort." << endl;
	cout << "5: Quick_sort" << endl;
	cout << "6: Show_arr" << endl;
	cout << "7: binary_search" << endl;
	cout << "8: linear_search" << endl;
	cout << "9: Jump_search" << endl;
	cout << "0: exit." << endl;
	cout << "===============================" << endl;
}

int nhapkey(int &key)
{
	cout << endl;
	cout << "nhap key de tiep tuc: ";
	cin >> key;
	return key;
}
int main()
{
	find_algorithm s0;
	sortarr s1;
	vector<int> arr = { 12,2,8,5,1,6,4,15 ,90,43,13,51 };
	int key;
	int x = 100;
	while (x!=0)
	{
		s1.option();
		while (x!=0)
		{
			nhapkey(key);
			switch (key)
			{
			case 1:
			{
				s1.interchange_sort(arr);
				break;
			}
			case 2:
			{
				s1.bubble_sort(arr);
				break;
			}
			case 3:
			{
				s1.insersort(arr);
				break;
			}
			case 4:
			{
				s1.selection_sort(arr);
				break;
			}
			case 5:
			{
				s1.quick_sort(arr, 0, arr.size() - 1);
				break;
			}
			case 6:
			{
				s1.show_arr(arr);
				break;
			}
			case 7:
			{
				s0.binary_search(arr);
				break;
			}
			case 8:
			{
				s0.linear_search(arr);
				break;
			}
			case 9:
			{
				s0.jump_search(arr);
				break;
			}
			case 0:
			{
				 x = 0;
			}
			}

		}
		
	}
	return 0;
}