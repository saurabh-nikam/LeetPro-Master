class Solution:
     def numRescueBoats(self, people: List[int], limit: int) -> int:
        boats,l,r,people = 0,0,len(people)-1,sorted(people)
        while l<r: l+=1 if (people[l]+people[r]<=limit) else 0; r-=1; boats+=1
        return boats+int(l==r)