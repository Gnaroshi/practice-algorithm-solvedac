// problem: Highways
// id: 7477
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, nxt = 2;
    cin >> n;
    vector<int> v(n);
    v[0] = 0;
    for (int i = 1; i < n; i++)
        cin >> v[i];
    if (n < 4)
    {
        cout << 0 << '\n';
        return 0;
    }

    for (int i = 3; i < n - 1; i++)
    {
        if (v[i] - v[i - 1] < v[nxt] - v[nxt - 1])
            nxt = i;
    }
    cout << v[n - 1] - v[0] + v[nxt] - v[nxt - 1] << '\n';
    cout << n << ' ' << nxt << ' ' << nxt + 1 << ' ' << 1 << '\n';

    return 0;
}