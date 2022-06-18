def euclid_GCD_RECUR(a,b):
    assert a==int(a) and b==int(b),'Number must be integer'
    if a<0:
        a=-1*a
    if b<0:
        b=-1*b
    divisor = a if b>=a else b
    dividend = b if b>=a else a
    if(divisor==0):
        return dividend
    else:
        rem=dividend%divisor
        return euclid_GCD_RECUR(divisor,rem)

print(euclid_GCD_RECUR(3,23))