// problem: すごろくと駒 (Sugoroku and Pieces)
// id: 16786
// time taken:
#include <bits/stdc++.h>
using namespace std;

bool chk[2020];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, t;
    cin >> n;
    vector<int> v;
    v.push_back(0);
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        chk[t] = true;
        v.push_back(t);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> t;
        if (v[t] < 2019)
        {
            if (!chk[v[t] + 1])
            {
                chk[v[t]] = false;
                chk[v[t] + 1] = true;
                v[t]++;
            }
        }
    }
    for (int i = 1; i < 2020; i++)
    {
        if (chk[i])
            cout << i << '\n';
    }

    return 0;
}