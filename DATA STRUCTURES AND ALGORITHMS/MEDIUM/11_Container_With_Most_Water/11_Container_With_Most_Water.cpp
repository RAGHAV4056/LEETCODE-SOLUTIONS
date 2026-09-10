// LeetCode 11 - Container With Most Water
// Approach: Two Pointers
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    int maxArea(vector<int>& height)
        {int area = 0; int n = height.size();
        int *l = &height[0]; int *r = &height[n-1];
        int width = n-1;
        while(l!=r)
        {if(*l>*r)
            {if((*r)*width>area){area = (*r)*width;}
            r--;
            width--;}
         else
            {if((*l)*width>area){area = (*l)*width;}
            l++;
            width--;}}
        return area;}
};
