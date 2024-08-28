#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<iomanip>
#include"leetcode.h"
#include<unordered_map>
#include<map>

using namespace std;

// defind the function.

 //input the interge k and rotate k the element from end to begin of vector and return the new vector.
void solution::rotate(vector<int>& nums, int k)
{
	//gan lenght = kich thuoc vector.
	int length = nums.size();
	// dao nguoc mang from begin to end.
	reverse(nums.begin(), nums.end());
	// dao nguoc cac phan tu from local begin + k to end.
	reverse(nums.begin() + k, nums.end());
	// rotate element from local begin to begin + k -1.
	reverse(nums.begin(), nums.begin() + k);
}
// return the result true if the number in vecter have the duplication.
bool solution::duplicate(vector<int>& nums)
{
	int k = nums.size();
	for (size_t i = 0; i < k - 1; i++)
	{
		for (size_t j = i + 1; j < k; j++)
		{
			if (nums[i] == nums[j])
			{
				return true;
			}
		}

	}
	return false;
}
// remove duplicate the number in vector.
int solution::removeduplicate(vector<int>& nums)
{
	// gan do dai cua vecto nums
	int length = nums.size();
	// khoi tao vector copy
	vector<int> copy;
	// gan phan tu dau tien cho vecto.
	copy.push_back(nums[0]);

	for (int i = 1; i < length; i++)
	{
		if (nums[i] > nums[i - 1])
		{
			copy.push_back(nums[i]);
		}
	}
	// sao chep vecto copy cho nums
	nums = copy;
	return copy.size();
}
// form vector to number and addition 1 for number and return new vector.
vector<int> solution::digit(vector<int>& nums)
{
	int idx = 0;
	int length = nums.size();
	for (int i = length - 1; i >= 0; i--)
	{
		if (nums[i] != 9)
		{
			nums[i] = nums[i] + 1;
			return nums;
		}
		else
		{
			nums[i] = 0;
			idx++;
		}
		if (idx == length - 1)
		{
			nums.insert(nums.begin(), 1);
			return nums;
		}
	}
}
//move all the zero to bottom of array.
void solution::moveZeroes(vector<int>& nums)
{
	int idx = 0;
	int n = 0;
	int length = nums.size();
	for (int i = 0; i < length; i++)
	{
		if (nums[i] == 0)
		{
			nums.push_back(0);
			idx++;
		}
	}
	while (idx != 0)
	{
		if (nums[n] == 0)
		{
			nums.erase(nums.begin() + n);
			idx--;
		}
		else
		{
			n++;
		}
	}
}
// find the location off two element to it has total is target.
vector<int> solution::twosum(vector<int>& nums, int target)
{
	// code tham khao.
		/*int n = nums.size();
		unordered_map<int, int> umap;
		for (int i = 0; i < n; i++) {
			int complement = target - nums[i];
			if (umap.find(complement) != umap.end()) {
				return { umap[complement], i };
			}
			umap[nums[i]] = i;
		}
		return { -1, -1 };*/
	int n = target;
	vector<int> res;
	for (int i = 0; i < nums.size() - 1; i++)
	{
		for (int j = i + 1; j < nums.size(); j++)
		{
			if (nums[i] == (n - nums[j]))
			{
				res.push_back(i);
				res.push_back(j);
				break;
			}
		}
	}
	return res;
}
// rotate the image 90 do.
//vector<vector<int>> solution::rotateimage(vector<vector<int>>& matrix)
//{
//
//}
