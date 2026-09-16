// LeetCode 168: Excel Sheet Column Title
// Approach: Convert the column number to base-26 representation using A-Z mapping and reverse the generated string
// Time Complexity: O(log n)
// Space Complexity: O(log n)
class Solution {
public:
    string convertToTitle(int columnNumber)
        {string s1 = ""; int r;
         while(columnNumber>0)
            {columnNumber--;
             r = columnNumber%26;
             char x = 'A'+r;
             s1 += x;
             columnNumber = columnNumber/26;}
        string s2 = "";
        for(int i=s1.size(); i>0; i--)
            {s2+=s1[i-1];}
        return s2;}
};
