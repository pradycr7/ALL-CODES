mylist=[]
def FindPrime(n):
    for i in range(2,n+1):
        count=0
        for j in range(2,int(i**0.5)+1):
            if(i%j==0):
                count+=1
        if(count==0):
            mylist.append(i)
    return mylist

print(FindPrime(30))