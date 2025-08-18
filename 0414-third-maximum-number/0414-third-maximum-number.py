class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        nums = set(nums)
        maximum= max(nums)
        if len(nums)==2 or len(nums)==1:
            return max(nums)
        lst = []
        for i in nums:
            if i == maximum:
                continue
            lst.append (i)
        secMax= max(lst)
        thirdMaxLst = []
        for i in lst:
            if i == secMax:
                continue
            thirdMaxLst.append(i)
        return max(thirdMaxLst)
        # if lst[0]==secMax:
        #     thirdMax=lst[1]
        # else:
        #     thirdMax= lst[0]
        # for i in lst:
        #     if i > thirdMax and i!=secMax:
        #         thirdMax = i 
        # return thirdMax


        