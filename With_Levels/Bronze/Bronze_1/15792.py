# problem: A/B - 2
# id: 15792
# time taken:
a, b = map(int, input().split())

print(a // b, end="")
if a % b:
    print(".", end="")
    d = 0
    while a % b and d < 1500:
        a = (a % b) * 10
        print(a // b, end="")
        d += 1
