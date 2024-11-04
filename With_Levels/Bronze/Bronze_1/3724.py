# problem: 표
# id: 3724
# tag:
# time taken:


import sys

input = sys.stdin.readline

for _ in range(int(input())):
    n, m = list(map(int, (input().split())))

    v = list(map(int, (input().split())))

    for i in range(m - 1):
        tv = list(map(int, (input().split())))
        v = [a * b for a, b in zip(v, tv)]

    mx = v[0]
    mxl = 0
    for i, e in enumerate(v):
        if mx <= e:
            mx = e
            mxl = i

    print(mxl + 1)

    for j in v:
        print(j, end=" ")
