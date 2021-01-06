Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.




i had done this solution in python as I had used dictionary in it which is way more faster to find elements
I had inserted into dictionary and finded that element exist in it or not 


def firstduplicate(x):
    d={}
    l=len(x)
    for i in range(l):
        print(x[i])
        if x[i]<0 or x[i]>l:
            return "list has more than 0 or len"
        if x[i] in d:
            return i
        else:
            d[x[i]] = 1
    print(d)
       
l=list(map(int,input().split()))    
firstduplicate(l)
