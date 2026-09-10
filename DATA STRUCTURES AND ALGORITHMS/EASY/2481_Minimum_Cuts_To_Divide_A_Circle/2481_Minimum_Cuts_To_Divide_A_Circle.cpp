// LeetCode 2481: Minimum Cuts to Divide a Circle
// Approach: If n is 1, no cut is needed; for even n, n/2 cuts are required, otherwise n cuts are required
// Time Complexity: O(1)
// Space Complexity: O(1)
class Solution {
public:
    int numberOfCuts(int n)
        {if(n==1)
            {return 0;}
         else if(n%2==0)
            {return n/2;}
         else
            {return n;}}
};
