# problem: The Idiot of the Year Contest!
# id: 6736
# time taken:

import math

tc = int(input())
for _ in range(tc):
    y, n = input().split()
    f = str(math.factorial(int(y)))
    cnt = f.count(n)
    print(cnt)
