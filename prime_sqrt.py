import math
n=int(input("Enter a number "))
m=int(math.sqrt(n))
k=0
for i in range(2,m+1):
    if n%i==0:
        k=k+1
if k==0:
    print(m,", which square root of ",n," , is Prime Number.")
else:
    print(m,", which square root of ",n," , is NOt Prime Number")
