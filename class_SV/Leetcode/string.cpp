#include<iostream>
#include<string>
#include<math.h>
#include<vector>
#include<iomanip>
#include<unordered_map>
#include<cmath>
#include<map>
#include<array>
#include "leetcode.h"

using namespace std;

//defind the leetcode

bool solution_string::isaangram(string& s, string& t)
{
	/*map<char, int> mp;
	size_t s0 = s.size();
	size_t t0 = t.size();
	if (s0 != t0)
	{
		return false;
	}
	for (auto i : s)
		mp[i]++;
	for (int i = 0; i < t0; i++)
	{
		char index = t[i];
		if (mp.find(index) != mp.end() && mp[index] > 0)
		{
			mp[index]--;
		}
		if (mp[index]==0)
		{
			mp.erase(index);
		}
	}
	if (mp.size() == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
	return -1;*/
	//code tham khảo.
	int arr[26] = { 0 };
	int brr[26] = { 0 };

	for (int i = 0; i < s.size(); i++)
		arr[s[i] - 'a']++;

	for (int i = 0; i < t.size(); i++)
		brr[t[i] - 'a']++;


	for (int i = 0; i < 26; i++)
		if (arr[i] != brr[i])
			return false;

	return true;
}