// Problem:  Max Consecutive Ones(Leetcode)
// Approach: optimal solution
// Time Complexity: O(n)
// Space Complexity: O(1)
#include <vector>
using namespace std;
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int high = nums.size() - 1;
        int low = 0;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] > target)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return -1;
    }
};