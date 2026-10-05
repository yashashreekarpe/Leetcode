// Problem: Contains Duplicate
// Difficulty: Easy
// Topic: Hash Set
// Time Complexity: O(n log n)
// Space Complexity: O(n)
class Solution { 
public: 
    bool containsDuplicate(vector<int>& nums) { 
        set<int> seen; 
 
        for (int i=0;i<nums.size();i++) { 
            int num=nums[i];
            cout<<num<<endl;
            if (seen.find(num) != seen.end()) { 
                return true; 
            } 
 
            seen.insert(num); 
        } 
 
        return false; 
    } 
};
