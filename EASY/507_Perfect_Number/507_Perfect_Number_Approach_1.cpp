// LeetCode 507: Perfect Number
// Approach: Find all proper divisors and calculate their sum
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    bool checkPerfectNumber(int num)
    {int total = 0;
    for(int i=1; i<=num/2; i++)
        {if(num%i==0){total+=i;}}
    return total==num;}
};
