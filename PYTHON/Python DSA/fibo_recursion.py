def fibo(n):
    assert n>=0 and n==int(n), 'The number must be non-negative integer'
    if n in [0,1]:
        return n
    else:
        return fibo(n-1) + fibo(n-2)        
print(fibo(8))