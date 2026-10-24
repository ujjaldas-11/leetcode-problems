// leetcode 102

#include <iostream>
#include <queue>
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
  vector<vector<int>> levelOrderTraversal(TreeNode *root) {
    vector<vector<int>> ans;

    if (!root) {
      return ans;
    }

    queue<TreeNode *> q;
    q.push(root);

    while (!q.empty()) {
      int size = q.size();
      vector<int> level;
      for (int i = 0; i < size; i++) {
        TreeNode *fNode = q.front();
        q.pop();

        if (fNode->left) {
          q.push(fNode->left);
        }
        if (fNode->right) {
          q.push(fNode->right);
        }
        level.push_back(fNode->val);
      }
      ans.push_back(level);
    }
    return ans;
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
void printResult(const vector<vector<int>> &res) {
  cout << "Result:" << endl;
  for (const auto &level : res) {
    cout << "[ ";
    for (int val : level) {
      cout << val << " ";
    }
    cout << "]" << endl;
  }
}

int main() {
  TreeNode *root = buildSampleTree();

  Solution sol;
  vector<vector<int>> ans = sol.levelOrderTraversal(root);

  printResult(ans);

  return 0;
}
