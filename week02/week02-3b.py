class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        M1=len(word1)
        M2=len(word2)
        M = max(M1,M2)

        ans=""
        for i in range(M):
            if i<M1: ans += word1[i]
            if i<M2: ans += word2[i]
        return ans     