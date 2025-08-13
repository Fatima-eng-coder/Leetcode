class Solution:
    def fib(self, n: int) -> int:
        prev=0
        current=1
        if n ==0 :
            return(0)
        for i in range(1,n):
            prevprev=prev
            prev=current

            current=prev+prevprev


        return(current)