class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for i in range (len(nums)):
            
            j= i+1
            while j<len(nums):
               
                if nums[i]+nums[j]==target:
                    result = [i,j]
                    return result
                    

                j+=1