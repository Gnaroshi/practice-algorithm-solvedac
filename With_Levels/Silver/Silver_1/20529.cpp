// problem: 가장 가까운 세 사람의 심리적 거리
// id: 20529
// time taken:
#include <bits/stdc++.h>
using namespace std;

int fn(string a, string b)
{
    int ret = 0;
    for (int i = 0; i < 4; i++)
    {
        if (a[i] != b[i])
            ret++;
    }
    return ret;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<string> v(n);
        for (auto &i : v)
            cin >> i;
        if (n > 32)
        {
            cout << 0 << '\n';
            continue;
        }
        int mn = 0x3f3f3f3f;
        for (int i = 0; i < n - 2; i++)
            for (int j = i + 1; j < n - 1; j++)
                for (int k = j + 1; k < n; k++)
                    mn = min(mn, (fn(v[i], v[j]) + fn(v[k], v[j]) + fn(v[i], v[k])));
        cout << mn << '\n';
    }

    return 0;
}