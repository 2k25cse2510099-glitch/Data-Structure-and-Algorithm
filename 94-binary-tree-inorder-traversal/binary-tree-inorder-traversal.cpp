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

    private:
    void recursiveinorder(TreeNode* treenode,vector<int>&arr){
        if(treenode==NULL) return;
        recursiveinorder(treenode->left,arr);
        arr.push_back(treenode->val);
        recursiveinorder(treenode->right,arr);
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>arr;
        recursiveinorder(root,arr);
        return arr;
    }
};