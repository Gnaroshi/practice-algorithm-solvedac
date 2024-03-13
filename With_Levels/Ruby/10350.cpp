// problem: Banks
// id: 10350
// time taken:

// Problem-Solvind Strategies by Arthur Engel, The Invariance Principle E9
// The algorithm always stop
// infinite multiset S of all sums defined by s(i, j) = x_i + ... + x_j-1, 1<=i<=n and i < j
// 모든 은행의 자본금의 합이 양수이므로 S에 존재하는 음수의 수는 유한
// 요술이 부려지는 행위 -> S의 원소들 중 음수인 것 하나만 변경
// 따라서 요술이 행해져야하는 횟수는 S의 음수인 원소의 수와 같음.

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll bnk[100005], k;
ll n, ans;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> bnk[i];
        bnk[i + n] = bnk[i];
    }

    for (int i = 1; i <= 2 * n; i++)
        bnk[i] += bnk[i - 1];

    k = bnk[n];

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            ll t = bnk[j + i] - bnk[j - 1];
            if (t < 0)
                ans += ceil(abs(t) / double(k));
        }
    }
    cout << ans << '\n';

    return 0;
}