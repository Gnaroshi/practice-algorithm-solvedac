# problem: 피보나치 수
# id: 4150
# tag:
# time taken:

n = int(input())

f = [0, 1, 1]

for i in range(3, n + 1):
    f.append(f[i - 1] + f[i - 2])

print(f[n])
