# problem: Kieszonkowe
# id: 8771
# time taken:

import sys

input = sys.stdin.readline

for _ in range(int(input())):
    n = int(input())
    k = [*map(int, input().split())]
    s = sum(k)
    m = 1
    for i in range(0, n):
        if s <= m:
            break
        m *= k[i]
    if s > m:
        print("SUMA")
    elif s < m:
        print("ILOCZYN")
    else:
        print("=")
