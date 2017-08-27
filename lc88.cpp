#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
	{
		int index = m + n - 1;
		int i = m - 1;
		int j = n - 1;
		while (j >= 0)
		{
			if (i >= 0 && nums1[i] >= nums2[j])
			{
				nums1[index] = nums1[i];
				index--;
				i--;
			}
			else
			{
				nums1[index] = nums2[j];
				index--;
				j--;
			}
		}
	}
};
int main()
{
	Solution s;
	vector<int> r1,r2;
	int m,n;
	cin >> m >> n;
	while (m)
	{
		int num;
		cin >> num;
		r1.push_back(num);
		m--;
	}
	while (n)
	{
		int num;
		cin >> num;
		r2.push_back(num);
		n--;
	}
	s.merge(r1, m, r2, n);
}