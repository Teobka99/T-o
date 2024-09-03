#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<iomanip>
#include"leetcode.h"
#include<unordered_map>
#include<map>

using namespace std;
// main 
int main()
{
	// rotate; duplicate; digit; moveZeroes; twosum;
#if 0
 	int k;
	vector<int> res;
	cout << "nhap k: "; cin >> k;
	solution s1;
	vector<int> arr = { 3,2,4};
	cout << arr.size() << endl;
	s1.rotate(arr, k);
	cout << "arr after rotate: ";
	cout << s1.duplicate(arr);
	s1.digit(arr);
	s1.moveZeroes(arr);
	res = s1.twosum(arr, k);
	for (int i = 0; i < res.size(); i++)
	{
		cout << res[i] << " ";
	}
	cout << endl;
#endif
	// so sanh 2 chuoi ki tu
#if 0
	solution_string s1;
	string s = "anagmar";
	string t = "nagaram";
	if (s1.isaangram(s, t) == true)
	{
		cout << "true";
 	}
	else
	{
		cout << "false";
	}
#endif  // 1
	// merge sort.
#if 0
	vector<int> arr = {1,2,3,7,8,10,0,0,0};
	vector<int> arr1 = {2,5,6};
	int m = 6;
	int n = 3;
	solution s1;
	s1.merge_sort(arr, m, arr1, n);
	cout << "arr: ";
	for (int i = 0; i < m+n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
#endif // 1
}