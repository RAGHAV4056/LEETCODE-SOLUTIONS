// LeetCode 441: Arranging Coins
// Approach: Find the maximum complete staircase using the sum of first i integers
// Time Complexity: O(sqrt(n))
// Space Complexity: O(1)
class Solution {
public:
    int arrangeCoins(int n)
        {if(n==0||n==1){return n;}
         long long int i = 1;int z = 0;
         while(i*(i+1)/2<=n){z++;i++;}
         return z;
        }
};
