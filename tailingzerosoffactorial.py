
# it is used to find no of tailing zeros of a factorial it is benefecial for large numbers to save most of the time by continious division of 5 

here the artical link 
https://www.purplemath.com/modules/factzero.htm

class Solution:
    def Met(self, n):
        s=5
        r=n/5
        tot=0
        while int(r):
            r=int(n/s)
            s=s*5
            tot=tot+r
        print(tot)
