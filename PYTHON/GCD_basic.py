def GCD_basic(a,b):
    for i in range(2,int(a**0.5)+1): # Here a modification is required
        gcd=1
        if(a%i==0 and b%i==0):
            while(a%i==0 and b%i==0):
                gcd=gcd*i
                a=a//i
                b=b//i