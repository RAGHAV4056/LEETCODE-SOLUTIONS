// LeetCode 2520: Categorize Box According to Criteria
// Approach: Check whether the box is bulky based on its dimensions or volume and heavy based on its mass, then categorize accordingly
// Time Complexity: O(1)
// Space Complexity: O(1)
class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass)
        {int bulky = 0; int m=0; long long volume = 1LL * length * width * height;
         if((length>=10000)||(width>=10000)||(height>=10000)||(volume>=1000000000))
            {bulky = 1;}
         if(mass>=100){m = 1;}
         if(m==1&&bulky==1)
            {return "Both";}
         else if(m==0&&bulky==0)
            {return "Neither";}
         else if(bulky==1&&m==0)
            {return "Bulky";}
         else if(m==1&&bulky==0)
            {return "Heavy";}
         return "Neither";}
};
