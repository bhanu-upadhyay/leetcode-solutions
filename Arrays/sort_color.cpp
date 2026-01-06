// Problem: Sort color (LeetCode 75)
// Approach: Dutch national flag algorithm
// Time Complexity: O(n)
// Space Complexity: O(1)
#include <vector>
#include <vector>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0;
        int mid=0;
        int high=nums.size()-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                mid++;
                low++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid],nums[high]);
                
                high--;
            }
        }

    }
    
};