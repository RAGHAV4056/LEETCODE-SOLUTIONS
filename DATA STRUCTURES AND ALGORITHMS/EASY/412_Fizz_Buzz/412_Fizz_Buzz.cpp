// LeetCode 412: Fizz Buzz
// Approach: Iterate from 1 to n and check divisibility by 3 and 5 to generate the required strings
// Time Complexity: O(n log n)
// Space Complexity: O(n)
class Solution {
public:
    vector<string> fizzBuzz(int n)
    {vector<string>v1;
     for(int i=0; i<n; i++)
     {if((i+1)%3==0&&(i+1)%5==0)
        {v1.push_back("FizzBuzz");}
      else if((i+1)%3==0)
        {v1.push_back("Fizz");}
      else if((i+1)%5==0)
        {v1.push_back("Buzz");}
      else
        {string num = "";
         int x = i+1;
         while(x>0)
            {num = char('0'+ x%10) + num;
             x = x/10;}
        v1.push_back(num);}}
        return v1;

    }
};
