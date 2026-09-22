// LeetCode 1342: Number of Steps to Reduce a Number to Zero
// Approach: If the number is odd, subtract 1; otherwise divide it by 2 until it becomes zero
// Time Complexity: O(log n)
// Space Complexity: O(1)
class Solution {
public:
    int numberOfSteps(int num)
    {int count1 = 0;
     while(num!=0)
        {if(num%2!=0){count1++;
                      num = num-1;}
         else
            {num = num/2;
             count1++;}}
     return count1;}
};
