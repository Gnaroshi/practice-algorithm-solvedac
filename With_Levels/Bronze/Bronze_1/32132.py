# problem: PlayStation이 아니에요
# id: 32132
# tag:
# time taken:

n = input()
s = input()

while "PS4" in s or "PS5" in s:
    s = s.replace("PS4", "PS")
    s = s.replace("PS5", "PS")

print(s)
