# problem: Long Multiplication
# id: 27130
# time taken:

a = int(input())
b = input()
nl = list(map(int, b))
nl.reverse()
print(a)
print(b)
for t in nl:
    print(a * int(t))
print(a * int(b))
