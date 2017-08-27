#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	int searchInsert(vector<int>& nums, int target) {
		int low = 0;
		int high = nums.size() - 1;
		int mid = (low + high) / 2;
		while (low <= high)
		{
			if (nums[mid] > target)
			{
				high = mid - 1;
				mid = (low + high) / 2;
			}
			else if (nums[mid] == target)
				return mid;
			else
			{
				low = mid + 1;
				mid = (low + high) / 2;
			}
		}
		return low;
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