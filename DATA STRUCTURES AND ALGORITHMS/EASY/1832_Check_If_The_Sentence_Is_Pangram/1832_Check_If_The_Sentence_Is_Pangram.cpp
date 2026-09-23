// LeetCode 1832: Check if the Sentence Is Pangram
// Approach: Count the occurrence of each alphabet character and check if all 26 letters are present
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    bool checkIfPangram(string sentence)
        {int arr[26] = {0};
         for(int i=0; i<sentence.size(); i++)
            {arr[sentence[i]-'a']++;}
         for(int i=0; i<26; i++)
            {if(arr[i]==0)
                {return false;}}
         return true;}
};
