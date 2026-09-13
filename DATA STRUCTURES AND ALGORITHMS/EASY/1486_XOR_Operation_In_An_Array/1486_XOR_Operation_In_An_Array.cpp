// LeetCode 1486: XOR Operation in an Array
// Approach: Generate each element using start + 2*i and XOR all the elements together
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    int xorOperation(int n, int start)
        {int nums; int prod = 0;
         for(int i=0; i<n; i++)
            {nums = start+2*i;
             prod^=nums;}
         return prod;}
};
