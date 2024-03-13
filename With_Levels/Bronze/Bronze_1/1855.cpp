// problem: 암호
// id: 1855
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n;
    string s, t;
    cin >> s;
    int iter = s.length();
    m = iter / n;
    vector<vector<char>> v(m);
    for (int i = 0; i < m; i++)
    {
        t = s.substr(i * n, n);
        if (i % 2)
            reverse(t.begin(), t.end());
        for (int j = 0; j < n; j++)
            v[i].push_back(t[j]);
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cout << v[j][i];

    return 0;
}