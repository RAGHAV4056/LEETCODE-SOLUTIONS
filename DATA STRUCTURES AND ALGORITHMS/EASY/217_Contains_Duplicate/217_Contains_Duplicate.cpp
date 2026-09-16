// LeetCode 217: Contains Duplicate
// Approach: Store the frequency of each element in a map and check if any element occurs more than once
// Time Complexity: O(n log n)
// Space Complexity: O(n)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums)
        {map<int,int>m1;
         for(int i=0; i<nums.size(); i++)
            {m1[nums[i]]++;}
         auto it = m1.begin();
         for(it ; it!=m1.end(); it++)
            {if(it->second>1)
                {return true;}}
        return false;}
};
