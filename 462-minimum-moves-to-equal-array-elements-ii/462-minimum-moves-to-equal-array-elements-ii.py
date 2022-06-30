class Solution:
    # class Solution(object):
    def minMoves2(self, nums):
        n = len (nums)
        mid = n//2
        nums.sort ()
        res = 0
        for i in range (n):
            res = res + abs (nums [i] - nums [mid])
        return res
        