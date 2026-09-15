// LeetCode 383: Ransom Note
// Approach: Count the frequency of each character in both strings and check whether the magazine has enough characters to construct the ransom note
// Time Complexity: O(n + m)
// Space Complexity: O(1)
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine)
        {int arr1[26] = {0}; int arr2[26] = {0};
        for(int i=0; i<ransomNote.size(); i++)
            {arr1[ransomNote[i]-'a']++;}
        for(int i=0; i<magazine.size(); i++)
            {arr2[magazine[i]-'a']++;}
        for(int i=0; i<26; i++)
            {if(arr2[i]<arr1[i])
                {return false;}}
        return true;
    }
};
