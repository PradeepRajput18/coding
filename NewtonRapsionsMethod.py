# this is best way to find any root of number 

#exact root value will be obtained in few 2 to 4 iterations for small numbers. maximum 7 for very  huge large. 1 or 2 very small numbers. 4 to 5 very large numbers this is for sqaure 


# this iterations will decrease based on increase in power as square is given above







        #input number to find root
        x=int(input())
        # input what kind of root you want to find sqare means 2, cube means 3
        c=int(input())
        p = 10 ** (-10)
        r = x
        while abs(x - r * r) > p:
            r = (r + x / r) / c
        print(r)
        print(int(r))
