// LeetCode 3498: Reverse Degree of a String
// Approach: Calculate the reverse alphabetical value of each character and multiply it by its 1-based position
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    int reverseDegree(string s)
        {int z; int total = 0;
         for(int i=0; i<s.size(); i++)
            {z = 'z'-s[i]+1;
             total += z*(i+1);}
         return total;}
};
