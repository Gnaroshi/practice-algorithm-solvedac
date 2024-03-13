// problem: 스물셋
// id: 23251
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
vector<ll> v;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    int cnt = 0;
    ll t = 23;
    while (cnt < 23232324)
    {
        if (t % 23 == 0)
        {
            v.push_back(t);
            cnt++;
        }
        t += 23;
    }

    while (tc--)
    {
        ll k;
        cin >> k;
        cout << v[k - 1] << '\n';
    }

    return 0;
}