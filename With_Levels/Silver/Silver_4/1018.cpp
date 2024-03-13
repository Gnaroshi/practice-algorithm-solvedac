// problem: 체스판 다시 칠하기
// id: 1018
// time taken:
#include <bits/stdc++.h>
using namespace std;

int n, m, t, mn = 0x3f3f3f3f;
vector<string> v;

int fn(int x, int y, char ca, char cb)
{
    int ret = 0;
    for (int i = x; i < 8 + x; i++)
    {
        for (int j = y; j < 8 + y; j++)
        {
            if ((i + j) % 2)
            {
                if (v[i][j] == ca)
                    ret++;
            }
            else
            {
                if (v[i][j] == cb)
                    ret++;
            }
        }
    }
    return ret;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    v.resize(n);
    for (auto &i : v)
        cin >> i;
    for (int x = 0; x <= n - 8; x++)
    {
        for (int y = 0; y <= m - 8; y++)
        {
            t = min(fn(x, y, 'B', 'W'), fn(x, y, 'W', 'B'));
            mn = min(t, mn);
            if (mn == 0)
                break;
        }
    }

    cout << mn;
    return 0;
}