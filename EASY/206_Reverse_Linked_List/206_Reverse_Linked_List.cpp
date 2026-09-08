// LeetCode 206: Reverse Linked List
// Approach: Reverse the linked list iteratively by changing the direction of each node's next pointer
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
    ListNode* reverseList(ListNode* head)
    {if(head==NULL||head->next==NULL)
        {return head;}
    ListNode *h;
     h = head;
     head = head->next;
     h->next = NULL;
     while(head!=NULL)
        {ListNode *n;
         n = head;
         head = head->next;
         n->next = h;
         h = n;}
    head = h;
    return head;

    }
};
