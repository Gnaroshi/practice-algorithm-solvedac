// problem: 강의실 예약 시스템
// id: 30019
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    int k, s, e;
    cin >> n >> m;
    vector<int> v(n + 1);
    for (auto i : v)
        i = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> k >> s >> e;
        if (s >= v[k])
        {
            cout << "YES\n";
            v[k] = e;
        }
        else
            cout << "NO\n";
    }

    return 0;
}