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
    public int maxAncestorDiff(TreeNode root) {
        return dfs(root, root.val, root.val); // initialize both max and min with root.val.
    }
    private int dfs(TreeNode n, int max, int min) {
        if (n == null) { return 0; } // base case.
        max = Math.max(n.val, max); // update max.
        min = Math.min(n.val, min); // update min.
        int l = dfs(n.left, max, min); // recurse down.
        int r = dfs(n.right, max, min); // recurse down.
        return Math.max(max - min, Math.max(l, r)); // compare all super/sub differences to get result.
    }
}