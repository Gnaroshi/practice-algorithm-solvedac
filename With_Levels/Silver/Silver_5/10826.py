# problem: 피보나치 수 4
# id: 10826
# tag:
# time taken:


n = int(input())

fibo = [0, 1, 1]
for i in range(3, n + 1):
    fibo.append(fibo[i - 2] + fibo[i - 1])

print(fibo[n])
