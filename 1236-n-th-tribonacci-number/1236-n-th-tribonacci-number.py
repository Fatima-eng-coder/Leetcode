class Solution:
    def tribonacci(self, n: int) -> int:
        a=0
        b=0
        c=1
        if n==0:
            return (0)
        for i in range (n-1):
            a1=a
            a=b
            b=c

            c=a1+a+b


        return (c)
           