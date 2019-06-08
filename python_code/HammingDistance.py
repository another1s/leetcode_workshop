class Solution:
    def hammingDistance(self, x: int, y: int) -> int:
        c = x^y
        c = bin(c)
        i = 0
        num=0
        while(i<len(c)):
            if c[i]=='1':
                num = num+1
            i=i+1
        return num