class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        for i in s:
            if (i=="(") or (i=="[") or (i=="{"):
                stack.append(i)
            else:
                if len(stack)==0:
                    return False
                if ((stack[-1]=="[" and i == "]" ) or
                (stack[-1]=="(" and i == ")" ) or 
                (stack[-1]=="{" and i == "}" )  ):
                    stack.pop(-1)
                else:
                    return False
        return len(stack)==0

                
                    


        