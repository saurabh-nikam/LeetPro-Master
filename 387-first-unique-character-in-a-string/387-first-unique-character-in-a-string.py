class Solution:
    def firstUniqChar(self, s: str) -> int:
        freq = Counter(s)
        
        # now check frequency of each character in the string from left-to-right
        # and whose frequency found to be 1 return the index
        for e in s :
            if freq[e] == 1 :
                return s.index(e)
            
        return -1
        