// problem: 지수를 더하자
// id: 27725
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);

    int n;
    ll t, a, b, k, ans = 0;
    vector<ll> v;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        v.push_back(t);
    }

    cin >> k;

    for (auto i : v)
    {
        if (i > k)
            break;
        a = i, b = i;
        while (true)
        {
            if (b > k)
                break;
            ans += k / b;
            b *= a;
        }
    }
    cout << ans;

    return 0;
}