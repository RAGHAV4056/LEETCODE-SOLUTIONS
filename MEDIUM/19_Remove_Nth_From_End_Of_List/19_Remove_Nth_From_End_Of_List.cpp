// LeetCode 19: Remove Nth Node From End of List
// Approach: Find the length of the linked list, calculate the target node's position from the beginning, and remove it
// Time Complexity: O(n)
// Space Complexity: O(1)
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
    ListNode* removeNthFromEnd(ListNode* head, int n)
        {ListNode *t = head; int count1 = 0;
         while(t!=NULL)
            {count1++;
             t = t->next;}
         t = head;
         int z = count1 - n;
         if(z==0)
            {ListNode *t = head;
             head = head->next;
             delete t;
             return head;}
         for(int i=0; i<z-1; i++)
            {t = t->next;}
         ListNode *t1;
         t1 = t->next;
         t->next = t1->next;
         delete t1;
        return head;
    }
};
