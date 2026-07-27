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
    void recursivepreorder(TreeNode* root,vector<int>&arr){
        if(root==NULL) return;
        arr.push_back(root->val);
        recursivepreorder(root->left,arr);
        recursivepreorder(root->right,arr);
        
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>arr;
        recursivepreorder(root,arr);
        return arr;
    }
};