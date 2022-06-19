def euclid_GCD(a,b):
    divisor = a if b>=a else b
    dividend = b if b>=a else a
    while(divisor>0):
        rem=dividend%divisor
        dividend=divisor
        divisor=rem
    return dividend
 
print(euclid_GCD(2,12))