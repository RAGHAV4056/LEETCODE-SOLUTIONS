// LeetCode 147: Insertion Sort List
// Approach: Build a sorted linked list by taking each node from the original list and inserting it into its correct position
// Time Complexity: O(n^2)
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
    ListNode* insertionSortList(ListNode* head)
        {ListNode *sorted = NULL;
         ListNode *current;
         current = head;
         while(current!=NULL)
            {ListNode *next = current->next;
             if(sorted==NULL||current->val<sorted->val)
                {current->next = sorted;
                 sorted = current;}
             else
                {ListNode *temp = sorted;
                 while(temp->next!=NULL&&temp->next->val<current->val)
                    {temp = temp->next;}
                 current->next = temp->next;
                 temp->next = current;}
            current = next;}
            head = sorted;
            return head;}
};
