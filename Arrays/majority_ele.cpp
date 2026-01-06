// Problem: majority element (Leetcode)
// Approach: Brute Force
// Time Complexity: O(n log n)
// Space Complexity: O(1)

#include <vector>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int final;
        int count=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                count++;
            }
            else{
                if(count>nums.size()/2){
                    return nums[i-1];
                }
                count=1;
                
            }
        }
        return nums[nums.size()-1];


    }
};