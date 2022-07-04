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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        if(!root) return {};
	queue<TreeNode*> q;
	vector<vector<int> > ans;
	q.push(root);
	while(!q.empty()) {
		int levelSize = size(q);
		vector<int> curLevel;
		for(int i = 0; i < levelSize; i++) {
			auto top = q.front(); q.pop();
			if(top -> left) q.push(top -> left);
			if(top -> right) q.push(top -> right);
			curLevel.push_back(top -> val);
		}
		ans.push_back(move(curLevel));
	}
	return ans;
    }
};