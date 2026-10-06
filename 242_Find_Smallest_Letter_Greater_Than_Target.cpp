// Problem: Valid Anagram
// Difficulty: Easy
// Topic: Sorting, Strings
// Time Complexity: O(n log n)
// Space Complexity: O(n)

// Approach:
// If the lengths of the two strings are different,
// they cannot be anagrams.
//
// Sort both strings and compare them.
// If the sorted strings are equal, then they are anagrams.

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())  {
            return false ;
        }
        else  {
            sort(s.begin(),s.end());
            sort(t.begin(),t.end());
            return s==t;
        }
    }
};
