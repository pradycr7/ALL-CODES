def sum_fact_without_itself(n):
    fact_list=[1]
    sum=0
    assert n==int(n) and n>0,'Only positive integers'
    for i in range(2,int(n**0.5)+1):
        if (n%i==0):
            fact_list=fact_list+[i]
            if(i!=n//i):
                fact_list=fact_list+[n//i]
    for j in range(0,len(fact_list)):
        sum=sum+fact_list[j]

    return sum

#print(sum_fact_without_itself(8))
net_sum=0
for a in range(1001,10001):
    for b in range(1001,10001):
        if(a!=b):
            if(sum_fact_without_itself(a)==b and sum_fact_without_itself(b)==a):
                net_sum=net_sum+a+b

print(net_sum)