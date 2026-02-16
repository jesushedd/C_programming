
g = 0
def fib(n):
    global g
    g+= 1
    print(g)
    if n <= 0:
        return 0
    if n == 1:
        return 1
    else:
        return fib(n-1) + fib(n-2)
fib(200)