// Problem: Single Number (LeetCode)
// Approach: Sorting (Brute Force)
// Time Complexity: O(n log n)
// Space Complexity: O(1)
#include <vector>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int odd;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i+=2){
            if(nums[i]!=nums[i+1]){
                return nums[i];
            }
        }
        return nums[nums.size() - 1];

    }
};