	/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int ans = 0;
    bool isLeaf(TreeNode* node){
        if (node == NULL)
            return false;
        if ((node->left == NULL) && (node->right == NULL))
            return true;
        return false;
    }
    int sumOfLeftLeaves(TreeNode* root) {
       if (root == NULL)
           return 0;
       if (isLeaf(root->left))
           ans += root->left->val;
       sumOfLeftLeaves(root->left);
        sumOfLeftLeaves(root->right);
        return ans;
    }
};