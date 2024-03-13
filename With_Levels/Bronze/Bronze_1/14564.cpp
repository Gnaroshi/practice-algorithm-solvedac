// problem: 두부 게임 (Tofu Game)
// id: 14564
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, a, e, t, tf;
    cin >> n >> m >> a;
    vector<int> v(n);
    iota(v.begin(), v.end(), 1);
    e = m / 2 + 1;
    tf = e;
    while (true)
    {
        cin >> t;
        if (t == e)
            break;
        a = a + t - e;
        if (a < 1)
            a += n;
        else if (a > n)
            a -= n;
        cout << v[a - 1] << '\n';
    }
    cout << 0 << '\n';

    return 0;
}