// Problem: Third Maximum Number
// Difficulty: Easy
// Topic: Arrays, Sorting
// Time Complexity: O(n log n)
// Space Complexity: O(log n) auxiliary space
// (Sorting space complexity may vary by implementation)

// Approach:
// Sort the array in descending order.
// Initialize count = 1 to track distinct maximum numbers.
// Traverse the sorted array and compare adjacent elements.
// If the current element differs from the previous element,
// increment count.
// When count becomes 3, return the current element.
// If fewer than three distinct numbers exist, return nums[0],
// which contains the maximum element.
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.rbegin(),nums.rend());
        int count=1;
        for(int i=1;i<nums.size();i++)  {
            if(nums[i]!=nums[i-1]) {
                count++;    
                if(count==3)  {
                return nums[i];
                break;
                }
            }
        }
        return nums[0];
    }
};
