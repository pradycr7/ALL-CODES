def factorial(n):
    assert n>=0 and n==int(n), 'The numbers must be non-negative integers only'
    if n in [0,1]:
        return 1
    else:
        return n*factorial(n-1)
print(factorial(1.5))