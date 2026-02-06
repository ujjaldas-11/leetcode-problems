class Solution:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.right = right
        self.left = left

    def InvertBinaryTree(self, root):
        if not root:
            return None

        root.left , root.right = root.right, root.left

        root.InvertBinaryTree(root.left)
        root.InvertBinaryTree(root.right)


        return root
