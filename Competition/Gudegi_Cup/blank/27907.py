n = int(input())
# 3825123056546413051
# 224584605939537911
a = 224584605939537911
if (n > 28):
    print(-1, end='')
else:
    p = []
    b = True
    for i in range(n):
        if (a <= 3825123056546413051):
            p.append(a)
            a += 81292139*223092870
        else:
            b = False
            break
    if b:
        for i in p:
            print(i, end='')
            print(' ', end='')
    else:
        print(-1, end='')
