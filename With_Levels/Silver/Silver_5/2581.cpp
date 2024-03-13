// problem: 소수
// id: 2581
// time taken:
#include <bits/stdc++.h>
using namespace std;

int ans = 0;
int mn = 10001;

bool is_prime(int n)
{
    if (n == 1)
        return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int m, n;
    cin >> m >> n;
    bool isOk = false;
    for (int i = m; i <= n; i++)
    {
        if (is_prime(i))
        {
            isOk = true;
            ans += i;
            if (mn > i)
                mn = i;
        }
    }
    if (!isOk)
        cout << -1;
    else
        cout << ans << '\n'
             << mn;

    return 0;
}