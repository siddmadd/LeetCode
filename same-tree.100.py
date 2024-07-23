# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution(object):
    def isSameTree(self, p, q):
        """
        :type p: TreeNode
        :type q: TreeNode
        :rtype: bool
        """
        if (not p or not q):
            if (not p and not q):
                return True
            return False
        
        stack1 = []
        stack1.append(p)
        stack2 = []
        stack2.append(q)
        if (p.val != q.val):
            return False
        while (len(stack1) != 0):
            n1 = stack1.pop()
            n2 = stack2.pop()
            if (n1.left):
                if (not n2.left):
                    return False
                else:
                    if (n1.left.val != n2.left.val):
                        return False
                stack1.append(n1.left)
                stack2.append(n2.left)
            else:
                if (n2.left):
                    return False

                
            if (n1.right):
                if (not n2.right):
                    return False
                else:
                    if (n1.right.val != n2.right.val):
                        return False
                stack1.append(n1.right)
                stack2.append(n2.right)
            else:
                if (n2.right):
                    return False
        return True