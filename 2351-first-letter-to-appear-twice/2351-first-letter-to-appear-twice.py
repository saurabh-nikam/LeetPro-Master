class Solution:
    def repeatedCharacter(self, s: str) -> str:
        a = {}
        for i in s:
            if i in a:
                a[i]+=1
            else:
                a[i]=1
            if a[i]==2:
                return i