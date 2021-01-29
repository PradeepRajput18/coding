


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
