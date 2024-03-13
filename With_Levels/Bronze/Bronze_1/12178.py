# problem: Power Levels (Small)
# id: 12178
# time taken:

# 1~9000 mtf digits

import math
import bisect


def fn(n):
    ret = math.log10(9000)
    t = 9000 - n
    while t > 0:
        ret += math.log10(t)
        t -= n
    return math.ceil(ret)


d = []
for i in range(1, 9000):
    d.append(fn(i))
d = d[::-1]

for i in range(1, 1 + int(input())):
    exps = 9000 - bisect.bisect_left(d, int(input()))
    if exps == 9000:
        print(f"Case #{i}: ...")
    else:
        print(f"Case #{i}: IT'S OVER 9000" + "!" * exps)
