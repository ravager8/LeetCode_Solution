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
    vector<int> largestValues(TreeNode* root) {
        
        queue<TreeNode*> q;
        vector<int> ans;
        if(root==NULL) return ans;
        int mx = root->val;
        q.push(root);

        while(!q.empty()){

            int k = q.size();
            ans.push_back(mx);
            mx = INT_MIN;
            for(int i=0;i<k;i++){

                TreeNode* node = q.front();
                q.pop();
                if(node->left){
                    mx = max(mx,node->left->val);
                    q.push(node->left);
                }
                if(node->right){
                    mx = max(mx,node->right->val);
                    q.push(node->right);
                }
            }
        }

        return ans;

    }
};