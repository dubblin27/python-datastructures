arr = [0,1]

def fib(n):
    a = 0 
    b = 1 
    if n == 0:
        return a 
    elif n==1 :
        return b 
    else :
        for i in range(2,n):
            c = a+b 
            a = b 
            b = c 
            arr.append(b)
n = int(input())
fib(n)
print(arr[n-1], tuple(arr))


