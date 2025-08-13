class Solution:
    def isHappy(self, n: int) ->bool:

        sums=[0]
        while True:
            num = str(n)
            sum_2 = 0
            for digit in num:
                sum_2 +=int(digit)**2
            n = sum_2
            if n==1:
                return True
            if n in sums:
                return False
            sums.append(n)

