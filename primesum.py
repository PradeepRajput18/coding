# this is prime sum problem

#  question is that Given an even number (greater than 2), return two prime numbers whose sum will be equal to given number.

# for example input 4 so 4=2+2, for 10=5+5 as 5 is prime

# Logic is very simple. that subtract it with prime and check reminder is also a prime or not  at line 20







import math
        c=int(input())
        f=0
        g=0
        for i in range(2,c+1):
            if prime(c-i) and prime(i):
                f=i
                g=c-i
                break
        print(f,g)
        
        
def prime(s):
    if s==2 or s==3 or s==7 or s==11 or s==5:
        return True
    if s%2==0 or s%3==0 or s%7==0 or s%5==0 or s%11==0:
        return False
    d=math.floor(math.sqrt(s))
    if d>11:
        for i in range(11,d+1):
            if s%i==0:
                return False
    return True
