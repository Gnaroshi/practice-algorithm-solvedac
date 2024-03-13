// problem: Календарь на Альфе Центавра
// id: 24871
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll d, m, w, i, j, k;
    cin >> d >> m >> w >> i >> j >> k;
    // i--;
    // j--;
    // k--;
    // ll t = ((k % w) * (m % w) * (d % w) % w + (j * m) % w + i % w) % w;
    ll t = 1 + (k - 1) * m * d + (j - 1) * d + i - 1;
    cout << char((t - 1) % w + 'a');

    return 0;
}
