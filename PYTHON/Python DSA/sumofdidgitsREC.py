def sum_of_digits(n):
    assert n>=0 and n==int(n), 'Only positive integers'
    if n==0:
        return n
    else:
        r=n%10
        n=n/10
        n=int(n) # Type Casting is required because n=n/10 always gives floating poit values
        return r+sum_of_digits(n)
print(sum_of_digits(125))

# OR

# def sum_of_digits(n):
 #   assert n>=0 and n==int(n), 'Only positive integers'
  #  if n==0:
   #     return n
    #else:
     #   return n%10 + sum_of_digits(int(n/10))      # Type Casting is required because n=n/10 always gives floating poit values

#print(sum_of_digits(1))