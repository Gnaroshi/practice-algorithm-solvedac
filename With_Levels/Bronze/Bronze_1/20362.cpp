// problem: 유니대전 퀴즈쇼
// id: 20362
// tag:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0, l;
    string ans, ansp, a, b;
    cin >> n >> ans;
    vector<pair<string, string>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (a == ans)
        {
            l = i;
            ansp = b;
        }
        v[i].first = a, v[i].second = b;
    }

    for (int i = 0; i < l; i++)
    {
        if (v[i].second == ansp)
            cnt++;
    }
    cout << cnt;

    return 0;
}
