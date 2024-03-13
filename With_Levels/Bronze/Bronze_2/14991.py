# problem: Disastrous Doubling
# id: 14991
# time taken:

n = int(input())
b = [*map(int, input().split())]
MD = 10**9 + 7
ans = 1
chk = 0
for bt in b:
    ans = ans * 2 - bt
    if ans < 0:
        chk = 1
        break
if chk == 1:
    print("error")
else:
    print(ans % MD)
