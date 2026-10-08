// Problem: Intersection of Two Arrays
// Difficulty: Easy
// Topic: Arrays, Set
// Time Complexity: O(n log n + m log n)
// Space Complexity: O(n + min(n, m))

// Approach:
// Store all elements of nums1 in a set.
// A set automatically stores only unique elements.
//
// Traverse nums2 and check if each element exists in the set.
// If the element exists, add it to the result
// and erase it from the set to avoid duplicates.
//
// Finally, return the result.
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s(nums1.begin(),nums1.end());
        vector<int> result;
        for(int i=0;i<nums2.size();i++)   {
            int num=nums2[i];
            if(s.find(num)!=s.end()) {
                result.push_back(num);
                s.erase(num);
            }
        }
        return result;
    }
};
