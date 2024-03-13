# problem: НУЛИ
# id: 24350
# time taken:

import math

a = map(int, input().split())
t = str(math.comb(*a))
print(t.count("0"))
