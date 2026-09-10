// LeetCode 70: Climbing Stairs
// Approach: Use an iterative Fibonacci pattern where each step is the sum of the previous two steps
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    int climbStairs(int n)
    {if(n<=1)
        {return 1;}
     int a = 0, b = 1;
     for(int i=0; i<n; i++)
        {int c = a+b;
         a = b;
         b = c;}
     return b;

    }
};
