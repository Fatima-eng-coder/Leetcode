class Solution:
    def isPalindrome(self, x):
        OrigNum = x
        dig = 0 
        reverse = 0 
        if x<0:
            return False 
        elif x ==0:
            return True
        elif x >0:
            while x>0:
                dig =x%10
                reverse = reverse*10 + dig
                
                x = x//10

            if reverse == OrigNum:
                return True
            else :
                return False 


