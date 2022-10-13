class Solution:
    def findPaths(self, m: int, n: int, maxMove: int, startRow: int, startColumn: int) -> int:
        
        @lru_cache(None)
        def recurr(i,j,moves):
            if i<0 or j<0 or j>=n or i>=m :
                return 1
            if moves<=0 :
                return 0
            moves-=1
            return (recurr(i+1,j,moves)+recurr(i,j+1,moves)+recurr(i-1,j,moves)+recurr(i,j-1,moves))%((10**9)+7)
        
        return recurr(startRow,startColumn,maxMove)