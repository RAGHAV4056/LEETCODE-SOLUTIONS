// LeetCode 234: Palindrome Linked List
// Approach: Use a stack to store the first half of the linked list, then compare it with the second half
// Time Complexity: O(n)
// Space Complexity: O(n)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head)
        {stack<int>s1;
         ListNode *h1, *h2;
         h1 = head;
         h2 = head;
         while(h2!=NULL&&h2->next!=NULL)
            {s1.push(h1->val);
             h1 = h1->next;
             h2 = ((h2->next)->next);}
         if(h2!=NULL)
            {h1 = h1->next;}
         while(h1!=NULL)
            {if(h1->val==s1.top())
                {s1.pop();
                 h1 = h1->next;}
             else
                {return false;}}
         return true;}
};
