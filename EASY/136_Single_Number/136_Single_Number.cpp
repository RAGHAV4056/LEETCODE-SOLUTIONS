// LeetCode 136: Single Number
// Approach: Use XOR to cancel out pairs of identical numbers, leaving only the single number
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    int singleNumber(vector<int>& nums)
        {int n = nums.size();
         int prod;
         for(int i = 0; i<n; i++)
            {if(i==0){prod = nums[0];}
             else{prod = prod^nums[i];}}
         return prod;}
};
