//leetcode 110 isbalanced binary tree

class Solution {
private:
    pair<bool, int> isBalancedFast(TreeNode* root) {
        if(root == nullptr) {
            return {true, 0};
        }

        pair<int, int> left = isBalancedFast(root->left);
        pair<int, int> right = isBalancedFast(root->right);

        bool leftAns = left.first;
        bool rightAns = right.first;

        bool diff = abs(left.second - right.second) <= 1;

        pair<bool, int> ans;
        ans.second = max(left.second, right.second) + 1;
        ans.first = leftAns && rightAns && diff;
        
        return ans;
    }

public:
    bool isBalanced(TreeNode* root) {
        return isBalancedFast(root).first;
    }
};