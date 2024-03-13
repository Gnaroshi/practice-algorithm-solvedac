// problem: 보석 도둑
// id: 14232
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MX = 1000000;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll k, d = 2;
    cin >> k;
    vector<ll> ans;
    while (k > 1)
    {
        if (d >= MX)
        {
            ans.push_back(k);
            break;
        }
        if (k % d)
            d++;
        else
        {
            k /= d;
            ans.push_back(d);
        }
    }
    cout << ans.size() << '\n';

    for (auto i : ans)
        cout << i << ' ';

    return 0;
}