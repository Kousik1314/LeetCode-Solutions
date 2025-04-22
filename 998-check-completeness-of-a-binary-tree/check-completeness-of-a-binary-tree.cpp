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
    bool isCompleteTree(TreeNode* root) {
        int totalNodes=countNodes(root);
        return isComplete(root, 1 , totalNodes);
        
    }
    bool isComplete(TreeNode* root, int i, int totalNodes){
        if(root==nullptr) return true;
        if(i>totalNodes) return false;
        bool isLeftComplete=isComplete(root->left,2*i,totalNodes);
        bool isRightComplete=isComplete(root->right,(2*i)+1,totalNodes);
        return isLeftComplete && isRightComplete;
    }
    int countNodes(TreeNode* root){
        if(root==nullptr) return 0;
        int leftCount=countNodes(root->left);
        int rightCount=countNodes(root->right);
        return 1+leftCount+rightCount;

    }
};