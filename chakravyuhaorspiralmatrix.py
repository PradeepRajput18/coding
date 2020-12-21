#  In this I had used Itrations other than recursions. 

#  this question is to print a spiral matrix of a given size n. This question is also given in tcs codevita so I had mentioned chakravyuha and In tcs they asked power point so I had added them 

#  power points are the numbers divided by 11 so I had noted the points where multiples of 11 had came and return them

a=int(input())
b=a
m=[]
for i in range(a):
    j=0
    q=[]
    while(j<b):
        q.append(-9999);
        j=j+1
    m.append(q)
    
t=1
i=0
j=0
l=0
p=0
z=[0]
x=[0]
while i<=a:
    while j<a:
        if m[i][j]==-9999:
            m[i][j]=t
            if t%11==0:
                z.append(i)
                x.append(j)
                p=p+1
            t=t+1
        j=j+1
    j=j-1
    while i<a:
        if m[i][j]==-9999:
            m[i][j]=t
            if t%11==0:
                z.append(i)
                x.append(j)
                p=p+1
            t=t+1
        i=i+1
    i=i-1
    while j>=l:
        if m[i][j]==-9999:
            m[i][j]=t
            if t%11==0:
                z.append(i)
                x.append(j)
                p=p+1
            t=t+1
        j=j-1
    j=j+1
    while i>=l:
        if m[i][j]==-9999:
            m[i][j]=t
            if t%11==0:
                z.append(i)
                x.append(j)
                p=p+1
            t=t+1
        i=i-1
    a=a-1
    l=l+1
    i=j=l
a=b
for i in range(a):
    j=0
    while(j<a):
        print(m[i][j],end="")
        print('\t',end="")
        j=j+1
    print()

p=p+1
print("Total Power points :",p)
    
for i in range(p):
    print("(",end="")
    print(z[i],end="")
    print(",",end="")
    print(x[i],end="")
    print(")",end="")
    print()
