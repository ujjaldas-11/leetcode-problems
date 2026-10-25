//leetcode 104

#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == nullptr) {
            return 0;
        }

        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        
        int ans = max(left, right) +1;

        return ans;

    }
};

// Helper: Build a sample tree
//        3
//       / \
//      9  20
//         / \
//        15  7
TreeNode* buildSampleTree() {
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);
    return root;
}

int main() {
    TreeNode* root = buildSampleTree();

    Solution sol;
    int ans = sol.maxDepth(root);

    // print (ans);
    cout << "Max depth of tree: " << ans << endl;

    return 0;
}