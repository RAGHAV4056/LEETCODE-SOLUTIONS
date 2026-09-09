// LeetCode 3870: Count Commas in Range
// Approach: If n is at least 1000, every number from 1000 to n contains one comma
// Time Complexity: O(1)
// Space Complexity: O(1)
class Solution {
public:
    int countCommas(int n)
        {int start = 1000;
         if(n<1000)
            {return 0;}
         return (n-start+1);}
};
