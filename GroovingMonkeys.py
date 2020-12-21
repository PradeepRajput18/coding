# this is the question given in tcs. I had got logic to do this sum using GCD from others. 

# For Question please search them Grooving monkeys in google which is a old tcs question

# this question can be done simply by gcd rather than using brute force which consumes more time and memory like to check every possible case and them check if that case is posssible according to question or not










from math import gcd
def l(x,y):
    return(int((x*y)/gcd(x,y)))
n=int(input())
while(n):
    n=n-1
    a=int(input())
    m=list(map(int,input().split()))
    t=1;c=0;p=0 
    while(p<=a-1):
        b=p;c=0 
        while(m[p]!=0):
            h=p 
            p=m[p]-1 
            m[h]=0 
            c+=1 
        p=b+1 
        if(c!=0):
            t=l(t,c) 
    print(int(t))
