class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        base = strs[0]
        for words in strs:
            if len(words)<len(base):
                base = words
        res=""
        for x in range (len(base)):
            match = False
            for i in strs:
                
                if i[x]==base[x]:
                    match = True
                else:
                    match = False
                    break
            if match:
                res+=base[x] 
            else:
                break       


        return res