def factor_of_num(a):
    list_of_fact=[1,a]
    for i in range(2,int(a**0.5)+1):
        if(a%i==0):
            list_of_fact=list_of_fact+[i]
            if(i!=a/i):
                list_of_fact=list_of_fact+[a//i] # // gives floor division value
    
    return list_of_fact
print(factor_of_num(27))