// Problem:  Max Consecutive Ones(Leetcode)
// Approach: optimal solution
// Time Complexity: O(n)
// Space Complexity: O(1)
#include <vector>
using namespace std;
class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int count = 0;
        int count1 = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 1)
            {
                count++;
                count1 = max(count, count1);
            }
            else
            {
                count = 0;
            }
        }

        return count1;
    }
};