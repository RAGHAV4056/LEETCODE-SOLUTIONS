// LeetCode 709: To Lower Case
// Approach: Traverse the string and convert uppercase letters to lowercase
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    string toLowerCase(string s)
        {for(int i=0; s[i]!='\0'; i++)
            {if(s[i]>='A'&&s[i]<='Z')
                {s[i] = s[i]+32;}}
        return s;}
};
