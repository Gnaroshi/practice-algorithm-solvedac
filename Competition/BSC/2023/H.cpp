// problem: H번 - 줄줄이 박수
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, a, t, mx = -1;
    cin >> n >> m;
    vector<int> v(m + 1);
    fill(v.begin(), v.end(), 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> t;
            v[j] += t;
        }
    }
    cin >> a;
    for (int i = 1; i <= m; i++)
        v[i] += v[i - 1];
    for (int i = a; i <= m; i++)
    {
        mx = max(v[i] - v[i - a], mx);
    }
    cout << mx;

    return 0;
}