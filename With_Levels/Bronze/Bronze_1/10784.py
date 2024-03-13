# problem: Amalgamated Artichokes
# id: 10784
# time taken:
import math

p, a, b, c, d, n = map(int, input().split())
ans = 0
mx = 0
for i in range(1, n + 1):
    t = math.sin(a * i + b) + math.cos(c * i + d) + 2
    mx = max(mx, t)
    ans = max(ans, mx - t)

print(ans * p)
