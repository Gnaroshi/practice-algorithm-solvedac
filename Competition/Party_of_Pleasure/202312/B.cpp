// problem: B번 - 교환 분배법칙
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt;
    ll a, b, c;
    cin >> n;
    cnt = (2 * n + 1) * (2 * n + 1);
    for (a = -n; a <= n; a++)
    {
        if (a == 0)
            continue;
        for (b = -n; b <= n; b++)
            if (abs(1 - a - b) <= n)
                cnt++;
    }

    cout << cnt;

    return 0;
}

// 1 - a = b + c
// a = a*a+ ac + ba
// a = a(a + b + c)
// 1 = (a + b + c)