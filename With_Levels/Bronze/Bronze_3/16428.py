a, b = map(int, input().split())
x, y = a//b, a % b
if a != 0 and y < 0:
    x, y = x+1, y-b
print(x)
print(y)
