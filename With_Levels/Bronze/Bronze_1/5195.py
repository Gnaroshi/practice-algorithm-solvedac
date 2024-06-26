# problem: Stump Speech
# id: 5195
# tag:
# time taken:

for cnt in range(1, 1 + int(input())):
    dic = {}
    n = int(input())
    for _ in range(n):
        word = input()
        dic[word] = int(input())

    ans = 0
    msg = input()
    l = len(msg)
    for k, v in dic.items():
        wl = len(k)
        for i in range(l - wl + 1):
            match = True
            for j in range(wl):
                if k[j] != msg[i + j]:
                    match = False
                    break
            if match:
                ans += v
    print(f"Data Set {cnt}:")
    print(ans)
