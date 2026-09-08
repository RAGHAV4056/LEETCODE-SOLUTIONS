// LeetCode 1822: Sign of the Product of an Array
// Approach: Traverse the array, return 0 if any element is zero, and flip the sign for every negative element
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    int arraySign(vector<int>& nums)
        {int sign = 1;
         for(int i=0; i<nums.size(); i++)
            {if(nums[i]==0)
                {return 0;}
             if(nums[i]<0)
                {sign = sign*-1;}}
        return sign;}
};
