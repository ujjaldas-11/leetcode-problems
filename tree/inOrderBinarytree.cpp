#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};

class Solution {
public:
  vector<int> inorderTraversal(TreeNode *root) {
    vector<int> res;

    recur(root, res);
    return res;
  }

  void recur(TreeNode *root, vector<int> &res) {
    if (root == nullptr) {
      return;
    }

    recur(root->left, res);
    res.push_back(root->val);
    recur(root->right, res);
  }
};

// Helper: Build a sample tree
//        3
//       / \
//      9  20
//         / \
//        15  7             

TreeNode *buildSampleTree() {
  TreeNode *root = new TreeNode(3);
  root->left = new TreeNode(9);
  root->right = new TreeNode(20);
  root->right->left = new TreeNode(15);
  root->right->right = new TreeNode(7);
  return root;
}

// Helper: Print 2D vector
void printResult(const vector<int> &res) {
  cout << "Result:" << endl;
  // for (const auto &level : res) {
    cout << "[ ";
    for (int i=0; i<res.size(); i++) {
      cout << res[i] << " ";
    }
    cout << "]" << endl;
  // }
}

int main() {
  TreeNode *root = buildSampleTree();

  Solution sol;
  vector<int> ans = sol.inorderTraversal(root);

  printResult(ans);

  return 0;
}


