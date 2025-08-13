class Solution:
    def climbStairs(self, n: int) -> int:

        prev=1
        current=1
        if n<=1:
            return (1)
        else:
            for i in range(1,n):
                prevprev=prev
                prev=current

                current=prevprev+prev


        return (current)