#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		int sum = nums[0];
		int max = nums[0];
		for (int i = 1; i<nums.size(); i++)
		{
			if (sum < 0)
				sum = nums[i];
			else
				sum += nums[i];
			if (sum > max)
				max = sum;

		}
		return max;
	}
};
