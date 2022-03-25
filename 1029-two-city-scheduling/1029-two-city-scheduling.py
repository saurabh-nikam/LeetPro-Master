class Solution:
    def twoCitySchedCost(self, costs: List[List[int]]) -> int:
        # def twoCitySchedCost(self, costs: List[List[int]]) -> int:
        refund = []
        N = len(costs)//2
        minCost = 0
        for A, B in costs:
            refund.append(B - A)
            minCost += A
        refund.sort()
        for i in range(N):
            minCost += refund[i]
        return minCost
        