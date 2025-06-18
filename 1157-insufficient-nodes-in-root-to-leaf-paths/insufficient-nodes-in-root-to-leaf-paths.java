/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public TreeNode sufficientSubset(TreeNode root, int limit) {
        return dfs(root, 0, limit);        
    }
    public TreeNode dfs(TreeNode root,int sum, int limit){
        if(root==null) return root;
        //if root node is found
        if(root.left==null && root.right==null){
            if(sum+root.val >= limit) return root;
            else return null;
        }
        //iterating to each level and finding sum
        root.left = dfs(root.left,sum+root.val,limit);
        root.right=dfs(root.right,sum+root.val,limit);
        if(root.left==null && root.right==null) return null;
        else return root;
    }
}