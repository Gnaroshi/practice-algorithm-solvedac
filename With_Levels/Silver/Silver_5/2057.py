# problem: 팩토리얼 분해
# id: 2057
# tag:
# time taken:

n = int(input())
fs = [1, 1]

for i in range(2, 22):
    fs.append(fs[i - 1] * i)

ts = 0
chk = False

for i in range(21, -1, -1):
    if ts + fs[i] < n:
        ts += fs[i]
    elif ts + fs[i] == n:
        chk = True

print("YES" if chk else "NO")
