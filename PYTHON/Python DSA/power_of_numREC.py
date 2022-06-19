def power_of_num(n,p):
    assert p>=0 and p == int(p), 'Only for power as positive integers '
    if p==0:
        return 1
    else:
        return n*power_of_num(n,p-1)
print(power_of_num(2,1))