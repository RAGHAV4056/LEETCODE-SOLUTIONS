// LeetCode 2265: Count Nodes Equal to Average of Subtree
// Approach: Use postorder DFS to calculate the sum and number of nodes in each subtree, then compare the root value with the subtree average
// Time Complexity: O(n)
// Space Complexity: O(h)
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int count1 = 0;
    pair<int,int> PostOrderDfs(TreeNode* root)
        {if(root==NULL)
            {return {0,0};}
         pair<int,int>left = PostOrderDfs(root->left);
         pair<int,int>right = PostOrderDfs(root->right);
         int total = left.first + right.first + root->val;
         int CountNode = left.second + right.second + 1;
         if(root->val==total/(CountNode))
            {count1++;}
         return {total,CountNode};}
    int averageOfSubtree(TreeNode* root)
        { PostOrderDfs(root);
          return count1;}
};
