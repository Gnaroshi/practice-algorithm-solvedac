// problem: 시험 감독
// id: 13458
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll b, c, ans = 0;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    cin >> b >> c;

    for (auto i : v)
    {
        if (i <= b)
            ans++;
        else
        {
            i -= b;
            ans += (i + c - 1) / c + 1;
        }
    }
    cout << ans;

    return 0;
}