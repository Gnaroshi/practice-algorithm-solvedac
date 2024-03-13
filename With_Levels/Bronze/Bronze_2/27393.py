anss = []
for a in range(1, 1001):
    for b in range(1, 1001):
        for c in range(1, 1001):
            ans = 1e9
            # a, b, c = map(int, input().split())
            for op1 in ("+", "-", "*", "//"):
                if op1 == "//" and a % b:
                    continue
                num = eval(f"{a}{op1}{b}")
                for op2 in ("+", "-", "*", "//"):
                    if op2 == "//" and num % c:
                        continue
                    res = eval(f"{num}{op2}{c}")
                    ans = ans if res < 0 else min(ans, res)
            anss.append(ans)
            if a % 100 == 0:
                print(a, b, c)
f = open("27393ans.txt", "w", encoding="UTF-8")
for i in anss:
    f.write(i)
