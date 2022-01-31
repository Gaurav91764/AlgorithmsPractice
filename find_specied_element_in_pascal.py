def c(n,r):
    if n == 0 or r == 0:
        return 0
    if r == 1 or r == n-1:
        return n

    v = c(n-1,r) + c(n-1,r-1)
    return v


print(c(6,3))