def deci_to_binaryRECUR(a):
    assert a==int(a),'Only for integers'
    if(a==1):
        return 1
    else:
        return deci_to_binaryRECUR(a//2)*10 + (a%2)

print(deci_to_binaryRECUR(10))