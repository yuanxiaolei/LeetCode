#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	int removeDuplicates(vector<int>& nums)
	{
		vector<int>::iterator itr = nums.begin();
		while (itr != nums.end()-1 && itr != nums.end())
		{
			if (*itr == *(itr + 1))
				itr = nums.erase(itr);
			else
				itr++;
		}
		return nums.size();

	}
};
int main()
{
	Solution s;
	vector<int> r;
	int n;
	cin >> n;
	while (n)
	{
		int m;
		cin >> m;
		r.push_back(m);
		n--;
	}
	cout << s.removeDuplicates(r) << endl;
}