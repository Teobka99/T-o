#include <iostream>
#include<string>
#include<iomanip>
#include<vector>
#include<math.h>

using namespace std;

// khai bao template tim phan tu max trong array
template<typename T> T maxarr(T* arr, T n) // 
{
    T ins = arr[0]; // bien nho 
	for (size_t i = 0; i < n; i++)
	{
		if (arr[i] > ins)
		{
			ins = arr[i];   // gan gia tri max moi nhat cho ins
		}
	}

	return ins;
}

// tao mang ngau nhien co n phan tu

template<typename T> T arrayrandom(T* arr, T n)
{
	srand(time(NULL));

	for (size_t i = 0; i < n; i++)
	{
		arr[i] = rand();
	}

	return *arr;
}


int main()
{
	int max = 0;
	int n;
	cout << "nhap n: ";
	cin >> n;
	int *arraya = new int[n];
	cout << arraya << endl;
	cout << *arraya << endl;
	*arraya = arrayrandom<int>(arraya, n);
	cout << arraya << endl;
	cout << *arraya << endl;
	cout << "arr[]: ";
	for (size_t i = 0; i < n; i++)
	{
		cout << *(arraya + i) << " ";
	}
	cout << endl;
	max = maxarr<int>(arraya, n);
	cout << "max: " << max << endl;

	delete[] arraya;
	arraya = NULL;
	return 0;
}
