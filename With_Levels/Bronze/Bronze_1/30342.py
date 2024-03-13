#  problem: Picos
#  id: 30342
#  time taken:

n, m, t, k = map(int, input().split())
mn = min((k + t - 1) // t, n // m)
ans = (m * (mn * (k * 2 - t * (mn - 1)))) // 2
if n % m != 0 and (k + t - 1) // t > n // m:
    ans += (n % m) * (k - t * (n // m))
print(ans)
