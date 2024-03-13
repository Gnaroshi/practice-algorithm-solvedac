# problem: H번 - 행렬 연산 (행렬 계산하기)
# id:
# time taken:

n, m, q = map(int, input().split())
mt = [[0 for j in range(m)] for i in range(n)]

for _ in range(q):
    o, r, v = map(int, input().split())
    if o == 1:
        for i in range(m):
            mt[r - 1][i] += v
    else:
        for i in range(n):
            mt[i][r - 1] += v

for i in range(n):
    ls = list(map(str, mt[i]))
    print(" ".join(ls))
