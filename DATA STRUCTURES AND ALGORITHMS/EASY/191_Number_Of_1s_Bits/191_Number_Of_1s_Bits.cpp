// LeetCode 191: Number of 1 Bits
// Approach: Repeatedly divide the number by 2 and count how many times the remainder is 1
// Time Complexity: O(log n)
// Space Complexity: O(1)
class Solution {
public:
    int hammingWeight(int n)
        {int count1 = 0;
         while(n!=0)
            {if(n%2==1)
                {count1++;}
             n = n/2;}
         return count1;}
};
