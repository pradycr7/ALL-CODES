a=0
b=1
sum=0
n=0
print(f'{a},{b}', end='')
while (n<9):
    sum=a+b
    a=b
    b=sum
    n+=1
    print(f',{sum}', end='')