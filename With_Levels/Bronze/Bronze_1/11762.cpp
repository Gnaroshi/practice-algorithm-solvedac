// problem: A Towering Problem
// id: 11762
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, iter, t, ts, cnt;
    vector<int> v(6), va, vb;

    for (auto &i : v)
        cin >> i;
    sort(v.begin(), v.end(), greater<>());

    cin >> a >> b;
    iter = 1 << 6;
    bool chk = true;
    for (int i = 0; i < iter; i++)
    {
        t = i;
        ts = cnt = 0;

        for (int j = 0; j < 6; j++)
        {
            ts += v[j] * (t % 2);
            cnt += t % 2;
            t /= 2;
        }
        if (cnt != 3)
            continue;

        if (ts == a)
        {
            for (int j = 0; j < 6; j++)
            {
                if (i % 2)
                    va.push_back(v[j]);
                else
                    vb.push_back(v[j]);
                i /= 2;
            }
            break;
        }
    }
    for (auto i : va)
        cout << i << ' ';
    for (auto i : vb)
        cout << i << ' ';

    return 0;
}