MX = 250
v = [0, 1, 3]
for i in range(3, MX + 1):
    v.append(v[i - 1] + v[i - 2] * 2)

while True:
    try:
        a = int(input())
        if a == 0:
            print(1)
        else:
            print(v[a])
    except:
        break
