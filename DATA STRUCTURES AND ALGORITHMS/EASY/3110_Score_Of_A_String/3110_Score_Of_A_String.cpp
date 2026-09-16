// LeetCode 3110: Score of a String
// Approach: Traverse the string and add the absolute difference between every pair of adjacent characters
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    int scoreOfString(string s)
        {int score = 0;
         for(int i=0; i<s.size()-1; i++)
            {score += abs(s[i]-s[i+1]);}
         return score;}
};
