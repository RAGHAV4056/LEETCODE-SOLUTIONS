// LeetCode: Mirror Distance
// Approach: Reverse the number and calculate the absolute difference
// Time Complexity: O(log n)
// Space Complexity: O(1)
class Solution {
public:
    int mirrorDistance(int n)
        {int rev = 0;
         int x = n;
         while(x!=0)
            {rev = rev*10 + x%10;
             x = x/10;}
         x = n - rev;
         if(x>0){return x;}
         else {return -x;}
         return x;
    }
};
