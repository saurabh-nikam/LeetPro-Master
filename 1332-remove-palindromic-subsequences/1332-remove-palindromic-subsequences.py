class Solution(object):
    def removePalindromeSub(self, s):
        return 2 - (s == s[::-1]) - (s == "")
        