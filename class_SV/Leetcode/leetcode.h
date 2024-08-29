#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<iomanip>
#include<array>

using namespace std;

class solution
{
public:
	//khai bao cac function.
	void rotate(vector<int>& nums, int k);

	bool duplicate(vector<int>& nums);

	int removeduplicate(vector<int>& nums);

	vector<int> digit(vector<int>& nums);

	void moveZeroes(vector<int>& nums);

	vector<int> twosum(vector<int>& nums, int target);

	vector<vector<int>> rotateimage(vector<vector<int>>& matrix);

	void merge_sort(vector<int>& vt1, int& m, vector<int>& vt2, int& n);
};

class solution_string : public solution
{
public:
	bool isaangram(string& s, string& t);
};

