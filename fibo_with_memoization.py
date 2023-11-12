l1 = {}

def fibo(n):
    if n in l1:
        return l1[n]
    if n <= 2:
        l1[n] = 1
    else:
        l1[n] = fibo(n-1) + fibo(n-2)
    return l1[n]

print(fibo(1000))
