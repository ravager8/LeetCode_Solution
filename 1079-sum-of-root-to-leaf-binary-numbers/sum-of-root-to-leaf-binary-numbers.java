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
    public int recursive(TreeNode node, String str) {
        if(node==null) return 0;

        str += node.val;
        if(node.left==null && node.right==null){
            return Integer.parseInt(str,2);
        }

        int result = 0;
        if(node.left!=null)
        result += recursive(node.left,str);
        if(node.right!=null)
        result += recursive(node.right,str);

        return result;
    }
    public int sumRootToLeaf(TreeNode root) {
        String binary = "";
        if(root.left==null && root.right==null) return root.val;
        int ans = 0;

        ans += recursive(root,binary);

        return ans;
    }
}