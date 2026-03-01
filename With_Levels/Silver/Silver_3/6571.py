# problem: 피보나치 수의 개수
# id: 6571
# tag:
# time taken:

import sys

f = [1, 2]
MX = pow(10, 100)

while f[-1] <= MX:
    f.append(f[-1] + f[-2])


for l in sys.stdin:
    t = list(map(int, l.split()))
    a, b = t[0], t[1]
    if a == 0 and b == 0:
        break

    cnt = 0
    for x in f:
        if a <= x <= b:
            cnt += 1
        elif x > b:
            break

    print(cnt)
