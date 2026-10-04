// Problem: Majority Element
// LeetCode: 169
// Difficulty: Easy
// Topic: Array, Boyer-Moore Voting Algorithm
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate=0;
        int count=0;
        for (int i = 0; i < nums.size(); i++) {
         int num = nums[i];
         cout << num << endl;
         if(count==0)  {
            candidate=num;
         }
         if(num==candidate)  {
            count++;
         }
         else{
            count--;
         }
        }
        return candidate;
    }
};
