#include <iostream>
#include<string>
#include<array>
#include<vector>
#include<iomanip>

using namespace std;

class solution
{
public:
    int removeduplicate(vector<int>& nums)
    {
        // gan do dai cua vecto nums
        int length = nums.size();
        // khoi tao vector copy
        vector<int> copy;
        // gan phan tu dau tien cho vecto.
        copy.push_back(nums[0]);

        for (int i = 1; i < length; i++)
        {
            if (nums[i] > nums[i -1])
            {
                copy.push_back(nums[i]);
            }
        }
        // sao chep vecto copy cho nums
        nums = copy;
        return copy.size();
    }
};

int main()
{
    vector<int> abs = { 1,1,1,1,1,1,1,1,1 };
    solution s1;
    int lenght;
    lenght = s1.removeduplicate(abs);

    cout << lenght << endl;

    // show phan tu trong vector abs
    for (size_t i = 0; i < abs.size(); i++)
    {
        cout << abs[i] << " ";
    }
    return 0;
}
