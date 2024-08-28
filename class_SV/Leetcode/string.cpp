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
	map<char, int> mp;
	int s0 = s.size();
	int t0 = t.size();
	if (s0 != t0)
	{
		return false;
	}
	for (auto i : s)
		mp[i]++;
	for (int i = 0; i < t0 -1; i++)
	{
		char index = t[i];
		if (mp.find(index) != mp.end() && mp[index] > 0)
		{
			mp[index]--;
		}
	}
	if (mp.size() == 0)
	{
		return true;
	}
	return -1;
}