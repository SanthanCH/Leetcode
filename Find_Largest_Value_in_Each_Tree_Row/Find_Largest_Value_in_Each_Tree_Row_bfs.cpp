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
        queue<TreeNode*>q;
        q.push(root);
       vector<int>ans;
        if(!root)
            return ans;
        while(!q.empty()){
            int sz=q.size();
             int mx=INT_MIN;
            for(int i=0;i<sz;i++){
                TreeNode* temp=q.front();
                q.pop();
                mx=max(mx,temp->val);
                if(temp->left)
                q.push(temp->left);
                if(temp->right)
                q.push(temp->right);
            }
            ans.push_back(mx);
        }
        return ans;
    }
};
