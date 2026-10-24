//leetcode 102
class Solution {
public:
  vector<vector<int>> levelOrderTraversal(node *root) {
    vector<vector<int>> ans;

    if (!root) {
      return ans;
    }

    queue<node *> q;
    q.push(root);

    while (!q.empty()) {
      int size = q.size();
      vector<int> level;
      for (int i = 0; i < size; i++) {
        node *fNode = q.front();
        q.pop();

        if (fNode->left) {
          q.push(fNode->left);
        }
        if (fNode->right) {
          q.push(fNode->right);
        }
        level.push_back(fNode->data);
      }
      ans.push_back(level);
    }
    return ans;
  }
};
