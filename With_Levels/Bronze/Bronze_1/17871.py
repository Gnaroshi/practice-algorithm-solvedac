# problem: Integers in Rational Bases
# id: 17871
# time taken:


def fn(p, q, n):
    ret = ""
    while n:
        n, a = divmod(n * q, p)
        ret = fn3(a) + ret
    return ret


def fn2(pm2):
    if pm2 <= "9":
        return ord(pm2) - 48
    elif pm2 <= "Z":
        return ord(pm2) - 55
    else:
        return ord(pm2) - 61


def fn3(pm3):
    if pm3 < 10:
        return chr(pm3 + 48)
    elif pm3 < 36:
        return chr(pm3 + 55)
    else:
        return chr(pm3 + 61)


p, q, n = map(int, input().split())
a, b = divmod(n, q)

t1, t2 = fn(p, q, a), fn(p, q, a + 1)

if t1 and fn2(t1[-1]) + b < p:
    print(t1[:-1] + fn3(fn2(t1[-1]) + b))
else:
    print(t2[:-1] + fn3(fn2(t2[-1]) - q + b))
