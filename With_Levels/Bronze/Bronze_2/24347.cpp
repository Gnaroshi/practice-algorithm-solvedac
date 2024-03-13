// problem: КАРТИ
// id: 24347
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll mx = 0;
    vector<int> v(4);
    for (auto &i : v)
        cin >> i;
    sort(v.begin(), v.end());

    do
    {
        string s = "";
        for (auto i = v.begin(); i != v.end(); i++)
            s += to_string(*i);
        ll t = 0, m = 1;
        reverse(s.begin(), s.end());
        for (auto i : s)
        {
            t += (i - '0') * m;
            m *= 10;
        }
        mx = max(mx, t);
    } while (next_permutation(v.begin(), v.end()));

    cout << mx;

    return 0;
}
