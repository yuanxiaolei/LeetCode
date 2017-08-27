#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	int searchInsert(vector<int>& nums, int target) {
		int i = 0;
		while (i < nums.size())
		{
			if (nums[i] < target)
				i++;
			else
				return i;
		}
		return nums.size();
	}
};
int main()
{
	Solution s;
	vector<int> r1;
	int m,n;
	cin >> m;
	while (m)
	{
		int num;
		cin >> num;
		r1.push_back(num);
		m--;
	}
	s.searchInsert(r1, n);
}