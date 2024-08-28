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
	//int k;
	//vector<int> res;
	//cout << "nhap k: "; cin >> k;
	//solution s1;
	//vector<int> arr = { 3,2,4};
	//cout << arr.size() << endl;
	//s1.rotate(arr, k);
	//cout << "arr after rotate: ";
	//cout << s1.duplicate(arr);
	//s1.digit(arr);
	//s1.moveZeroes(arr);
	//res = s1.twosum(arr, k);
	//for (int i = 0; i < res.size(); i++)
	//{
	//	cout << res[i] << " ";
	//}
	//cout << endl;
	solution_string s1;
	string s = "anagram";
	string t = "nagaram";
	if (s1.isaangram(s, t) == true)
	{
		cout << "true";
	}
	else
	{
		cout << "false";
	}
	return 0;
}