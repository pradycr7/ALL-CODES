def prime_factor(a):
    for i in range(2,int(a**0.5)+1): # Here actually we are checking the factors of the upadting number 'a'
        count=0   # So we need to check upto sqrt(n) to check whether a factor exists or not
        if(a%i==0):
            while(a%i==0):
                a=a//i
                count+=1
            print(f'{i}^{count}')
    if(a>1):
        print(f'{a}^1')

prime_factor(729)
            