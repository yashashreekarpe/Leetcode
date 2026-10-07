// Problem: Missing Number
// Difficulty: Easy
// Topic: Sorting, Arrays
// Time Complexity: O(n log n)
// Space Complexity: O(1) auxiliary space
//
// Approach:
// Sort the array in ascending order.
//
// Traverse the sorted array and check whether nums[i] is equal to i.
// If nums[i] != i, then i is the missing number.
// If all elements are in their correct positions,
// then the missing number is n (nums.size()).
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=i)
            {
                return i;
            }
        }
        return nums.size();
    }
};
