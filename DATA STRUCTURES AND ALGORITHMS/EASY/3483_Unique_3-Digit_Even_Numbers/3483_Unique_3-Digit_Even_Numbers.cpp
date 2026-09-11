// LeetCode 3483: Unique 3-Digit Even Numbers
// Approach: Enumerate all possible 3-digit numbers, skip leading zero and repeated indices, and use an array to avoid duplicate numbers
// Time Complexity: O(n^3)
// Space Complexity: O(1)
class Solution {
public:
    int totalNumbers(vector<int>& digits)
        {int arr[1000] = {0}; int count1 = 0;
         for(int i=0; i<digits.size(); i++)
            {if(digits[i]==0)
                {continue;}
             else
                {for(int j=0; j<digits.size(); j++)
                    {if(i==j)
                        {continue;}
                     else
                        {for(int k=0; k<digits.size(); k++)
                            {if(k==i||k==j||digits[k]%2!=0)
                                {continue;}
                             else{int x = digits[i]*100+digits[j]*10+digits[k];
                                  if(arr[x]==0)
                                        {arr[x]++;
                                         count1++;}}}}}}}
        return count1;}
};
