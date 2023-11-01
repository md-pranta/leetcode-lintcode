# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    prev = None
    result = []
    max_count = 0
    current_count = 0
    def findMode(self, root) -> list[int]:
        self.inOrder(root)
        return self.result
    def inOrder(self,node):
        if not node: return
        self.inOrder(node.left)
        self.current_count = 1 if node.val != self.prev else self.current_count + 1
        if self.current_count == self.max_count:
            self.result.append(node.val)
        elif self.current_count > self.max_count:
            self.result = [node.val]
            self.max_count = self.current_count
        self.prev = node.val
        self.inOrder(node.right)
        