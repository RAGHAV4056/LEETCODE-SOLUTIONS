// LeetCode 507: Perfect Number
// Approach: Find divisors in pairs up to the square root of num
// Time Complexity: O(sqrt(n))
// Space Complexity: O(1)
class Solution {
public:
    bool checkPerfectNumber(int num)
    {if(num<=1){return false;}
    int total = 1;
    for(int i=2; i<=pow(num,0.5); i++)
        {if(num%i==0)
            {total+=i;
            if(i!=num/i)
                {total+=num/i;}}}
    return total==num;}
};
