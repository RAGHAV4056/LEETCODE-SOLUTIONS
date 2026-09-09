// LeetCode 3871: Count Commas
// Approach: For every power of 1000, count the numbers from that point up to n and add them to the total
// Time Complexity: O(log n)
// Space Complexity: O(1)
class Solution {
public:
    long long countCommas(long long n)
        {long long x = 0;
         long long start = 1000;
         while(start<=n)
            { x+=(n-start+1);
             if(start>n/1000){break;}
             start*=1000;}
         return x;}
};
