#  problem: Cruel Math Teacher
#  id: 6097
#  time taken:

n, p = map(int, input().split())
s = str(n**p)

for i in range(0, len(s), 70):
    print(s[i : i + 70])
