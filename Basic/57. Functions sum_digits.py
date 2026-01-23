def sum_digits(a):
    c = 0
    while a:
        c += a % 10
        a //= 10
    return c