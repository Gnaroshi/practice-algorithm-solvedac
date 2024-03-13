# problem: 스노우볼
# id: 17950
# time taken:
import sys

MD = int(1e9 + 7)
h, x = map(int, sys.stdin.readline().split())
ans = 0
m = 1

for _ in range(h):
    t = int(sys.stdin.readline())
    m *= x
    m %= MD
    ans += (t * m) % MD
    ans %= MD
print(ans)
