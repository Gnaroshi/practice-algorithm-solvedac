n = int(input())
m = int(input())
if m > n:
    n, m = m, n
a = (n + m) / 2
b = (n - m) / 2
print(int(a))
print(int(b))
