// Problem: Relative Ranks
// Difficulty: Easy
// Topic: Arrays, Sorting, Searching
// Time Complexity: O(n^2)
// Space Complexity: O(n)

// Approach:
// Store the original scores in a separate vector.
// Sort the score array in descending order.
// Create an empty answer vector to store the ranks.
// Traverse the original scores and find the position of each
// score in the sorted array using the find() function.
// If the rank is 0, assign "Gold Medal".
// If the rank is 1, assign "Silver Medal".
// If the rank is 2, assign "Bronze Medal".
// For all other ranks, convert the position + 1 to a string.
// Store each rank in the answer vector and return it.
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> original=score;

        sort(score.rbegin(),score.rend());

        vector<string> ans;
        for(int i=0;i<score.size();i++) {

            int rank = find(score.begin(), score.end(), original[i]) - score.begin();
           
            if(rank==0)  { 
              ans.push_back("Gold Medal");
            }
            else if(rank==1) {
                ans.push_back("Silver Medal");
            }
            else if(rank==2)
            {
                ans.push_back("Bronze Medal");
            }
            else {
                ans.push_back(to_string(rank+1));
            }
        }
        return ans;
    }
};
