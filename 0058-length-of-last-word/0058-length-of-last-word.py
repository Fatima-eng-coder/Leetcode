class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        st = s.strip(" ")
        words = st.split(" ")
        return len(words[-1])
        